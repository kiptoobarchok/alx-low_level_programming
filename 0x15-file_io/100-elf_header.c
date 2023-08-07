#include "main.h"

void validateElfMagic(unsigned char *headerMagic);
void printMagicNumbers(unsigned char *headerMagic);
void printElfClass(unsigned char *headerMagic);
void printDataEncoding(unsigned char *headerMagic);
void printElfVersion(unsigned char *headerMagic);
void printOsAbi(unsigned char *headerMagic);
void printAbiVersion(unsigned char *headerMagic);
void printElfType(unsigned int elfType, unsigned char *headerMagic);
void printEntryPoint(unsigned long int entryPoint, unsigned char *headerMagic);
void closeElfFile(int fileDescriptor);

int main(int __attribute__((__unused__)) argc, char *argv[])
{
    Elf64_Ehdr *header;
    int fileDescriptor, bytesRead;

    fileDescriptor = open(argv[1], O_RDONLY);
    if (fileDescriptor == -1)
    {
        dprintf(STDERR_FILENO, "Error: Cannot read file %s\n", argv[1]);
        exit(98);
    }

    header = malloc(sizeof(Elf64_Ehdr));
    if (header == NULL)
    {
        closeElfFile(fileDescriptor);
        dprintf(STDERR_FILENO, "Error: Memory allocation failed\n");
        exit(98);
    }

    bytesRead = read(fileDescriptor, header, sizeof(Elf64_Ehdr));
    if (bytesRead == -1)
    {
        free(header);
        closeElfFile(fileDescriptor);
        dprintf(STDERR_FILENO, "Error: Unable to read file %s\n", argv[1]);
        exit(98);
    }

    validateElfMagic(header->e_ident);
    printf("ELF Header:\n");
    printMagicNumbers(header->e_ident);
    printElfClass(header->e_ident);
    printDataEncoding(header->e_ident);
    printElfVersion(header->e_ident);
    printOsAbi(header->e_ident);
    printAbiVersion(header->e_ident);
    printElfType(header->e_type, header->e_ident);
    printEntryPoint(header->e_entry, header->e_ident);

    free(header);
    closeElfFile(fileDescriptor);
    return 0;
}

void validateElfMagic(unsigned char *headerMagic)
{
    int index;

    for (index = 0; index < 4; index++)
    {
        if (headerMagic[index] != 127 &&
            headerMagic[index] != 'E' &&
            headerMagic[index] != 'L' &&
            headerMagic[index] != 'F')
        {
            dprintf(STDERR_FILENO, "Error: Not a valid ELF file\n");
            exit(98);
        }
    }
}

void printMagicNumbers(unsigned char *headerMagic)
{
    int index;

    printf("  Magic Numbers:   ");

    for (index = 0; index < EI_NIDENT; index++)
    {
        printf("%02x", headerMagic[index]);

        if (index == EI_NIDENT - 1)
            printf("\n");
        else
            printf(" ");
    }
}

void printElfClass(unsigned char *headerMagic)
{
    printf("  ELF Class:                             ");

    switch (headerMagic[EI_CLASS])
    {
    case ELFCLASSNONE:
        printf("none\n");
        break;
    case ELFCLASS32:
        printf("ELF32\n");
        break;
    case ELFCLASS64:
        printf("ELF64\n");
        break;
    default:
        printf("<unknown: %x>\n", headerMagic[EI_CLASS]);
    }
}

void printDataEncoding(unsigned char *headerMagic)
{
    printf("  Data Encoding:                              ");

    switch (headerMagic[EI_DATA])
    {
    case ELFDATANONE:
        printf("none\n");
        break;
    case ELFDATA2LSB:
        printf("2's complement, little endian\n");
        break;
    case ELFDATA2MSB:
        printf("2's complement, big endian\n");
        break;
    default:
        printf("<unknown: %x>\n", headerMagic[EI_CLASS]);
    }
}

void printElfVersion(unsigned char *headerMagic)
{
    printf("  ELF Version:                           %d",
           headerMagic[EI_VERSION]);

    switch (headerMagic[EI_VERSION])
    {
    case EV_CURRENT:
        printf(" (current)\n");
        break;
    default:
        printf("\n");
        break;
    }
}

void printOsAbi(unsigned char *headerMagic)
{
    printf("  OS/ABI:                            ");

    switch (headerMagic[EI_OSABI])
    {
    case ELFOSABI_NONE:
        printf("UNIX - System V\n");
        break;
    case ELFOSABI_HPUX:
        printf("UNIX - HP-UX\n");
        break;
    case ELFOSABI_NETBSD:
        printf("UNIX - NetBSD\n");
        break;
    case ELFOSABI_LINUX:
        printf("UNIX - Linux\n");
        break;
    case ELFOSABI_SOLARIS:
        printf("UNIX - Solaris\n");
        break;
    case ELFOSABI_IRIX:
        printf("UNIX - IRIX\n");
        break;
    case ELFOSABI_FREEBSD:
        printf("UNIX - FreeBSD\n");
        break;
    case ELFOSABI_TRU64:
        printf("UNIX - TRU64\n");
        break;
    case ELFOSABI_ARM:
        printf("ARM\n");
        break;
    case ELFOSABI_STANDALONE:
        printf("Standalone App\n");
        break;
    default:
        printf("<unknown: %x>\n", headerMagic[EI_OSABI]);
    }
}

void printAbiVersion(unsigned char *headerMagic)
{
    printf("  ABI Version:                       %d\n",
           headerMagic[EI_ABIVERSION]);
}

void printElfType(unsigned int elfType, unsigned char *headerMagic)
{
    if (headerMagic[EI_DATA] == ELFDATA2MSB)
        elfType >>= 8;

    printf("  ELF Type:                              ");

    switch (elfType)
    {
    case ET_NONE:
        printf("NONE (None)\n");
        break;
    case ET_REL:
        printf("REL (Relocatable file)\n");
        break;
    case ET_EXEC:
        printf("EXEC (Executable file)\n");
        break;
    case ET_DYN:
        printf("DYN (Shared object file)\n");
        break;
    case ET_CORE:
        printf("CORE (Core file)\n");
        break;
    default:
        printf("<unknown: %x>\n", elfType);
    }
}

void printEntryPoint(unsigned long int entryPoint, unsigned char *headerMagic)
{
    printf("  Entry Point Address:               ");

    if (headerMagic[EI_DATA] == ELFDATA2MSB)
    {
        entryPoint = ((entryPoint << 8) & 0xFF00FF00) |
                      ((entryPoint >> 8) & 0xFF00FF);
        entryPoint = (entryPoint << 16) | (entryPoint >> 16);
    }

    if (headerMagic[EI_CLASS] == ELFCLASS32)
        printf("%#x\n", (unsigned int)entryPoint);
    else
        printf("%#lx\n", entryPoint);
}

void closeElfFile(int fileDescriptor)
{
    if (close(fileDescriptor) == -1)
    {
        dprintf(STDERR_FILENO,
                "Error: Unable to close file descriptor %d\n", fileDescriptor);
        exit(98);
    }
}

