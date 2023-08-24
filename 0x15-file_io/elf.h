#ifndef ELF_H
#define ELF_H

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

#endif

