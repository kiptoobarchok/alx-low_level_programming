#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void checkElf(unsigned char *ident);
void printMagic(unsigned char *ident);
void printClass(unsigned char *ident);
void printData(unsigned char *ident);
void printVersion(unsigned char *ident);
void printOsAbi(unsigned char *ident);
void printAbiVersion(unsigned char *ident);
void printFileType(unsigned int type, unsigned char *ident);
void printEntryPoint(unsigned long int entry, unsigned char *ident);
void closeElfFile(int elf);

/**
 * checkElf - Checks if a file is an ELF file.
 * @ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file - exit code 98.
 */
void checkElf(unsigned char *ident)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (ident[index] != 127 &&
				ident[index] != 'E' &&
				ident[index] != 'L' &&
				ident[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * printMagic - Prints the magic numbers of an ELF header.
 * @ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: Magic numbers are separated by spaces.
 */
void printMagic(unsigned char *ident)
{
	int index;

	printf("  Magic:   ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", ident[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * printClass - Prints the class of an ELF header.
 * @ident: A pointer to an array containing the ELF class.
 */
void printClass(unsigned char *ident)
{
	printf("  Class:                             ");

	switch (ident[EI_CLASS])
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
			printf("<unknown: %x>\n", ident[EI_CLASS]);
	}
}

/**
 * printData - Prints the data of an ELF header.
 * @ident: A pointer to an array containing the ELF class.
 */
void printData(unsigned char *ident)
{
	printf("  Data:                              ");

	switch (ident[EI_DATA])
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
			printf("<unknown: %x>\n", ident[EI_CLASS]);
	}
}

/**
 * printVersion - Prints the version of an ELF header.
 * @ident: A pointer to an array containing the ELF version.
 */
void printVersion(unsigned char *ident)
{
	printf("  Version:                           %d",
			ident[EI_VERSION]);

	switch (ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}

/**
 * printOsAbi - Prints the OS/ABI of an ELF header.
 * @ident: A pointer to an array containing the ELF version.
 */
void printOsAbi(unsigned char *ident)
{
	printf("  OS/ABI:                            ");

	switch (ident[EI_OSABI])
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
			printf("<unknown: %x>\n", ident[EI_OSABI]);
	}
}

/**
 * printAbiVersion - Prints the ABI version of an ELF header.
 * @ident: A pointer to an array containing the ELF ABI version.
 */
void printAbiVersion(unsigned char *ident)
{
	printf("  ABI Version:                       %d\n",
			ident[EI_ABIVERSION]);
}

/**
 * printFileType - Prints the type of an ELF header.
 * @type: The ELF type.
 * @ident: A pointer to an array containing the ELF class.
 */
void printFileType(unsigned int type, unsigned char *ident)
{
	if (ident[EI_DATA] == ELFDATA2MSB)
		type >>= 8;

	printf("  Type:                              ");

	switch (type)
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
			printf("<unknown: %x>\n", type);
	}
}

/**
 * printEntryPoint - Prints the entry point of an ELF header.
 * @entry: The address of the ELF entry point.
 * @ident: A pointer to an array containing the ELF class.
 */
void printEntryPoint(unsigned long int entry, unsigned char *ident)
{
	printf("  Entry point address:               ");

	if (ident[EI_DATA] == ELFDATA2MSB)
	{
		entry = ((entry << 8) & 0xFF00FF00) |
			((entry >> 8) & 0xFF00FF);
		entry = (entry << 16) | (entry >> 16);
	}

	if (ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)entry);

	else
		printf("%#lx\n", entry);
}

/**
 * closeElfFile - Closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 *
 * Description: If the file cannot be closed - exit code 98.
 */
void closeElfFile(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - Displays the information contained in the
 *        ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the file is not an ELF File or
 *              the function fails - exit code 98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int fileDescriptor, readResult;

	fileDescriptor = open(argv[1], O_RDONLY);
	if (fileDescriptor == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));

	if (header == NULL)
	{
		closeElfFile(fileDescriptor);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	readResult = read(fileDescriptor, header, sizeof(Elf64_Ehdr));

	if (readResult == -1)
	{
		free(header);
		closeElfFile(fileDescriptor);
		printf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	checkElf(header->e_ident);
	printf("ELF Header:\n");
	printMagic(header->e_ident);
	printClass(header->e_ident);
	printData(header->e_ident);
	printVersion(header->e_ident);
	printOsAbi(header->e_ident);
	printAbiVersion(header->e_ident);
	printFileType(header->e_type, header->e_ident);
	printEntryPoint(header->e_entry, header->e_ident);

	free(header);
	closeElfFile(fileDescriptor);
	return (0);
}

