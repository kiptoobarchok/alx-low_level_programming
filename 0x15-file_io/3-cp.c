#include <stdio.h>
#include "main.h"

/**
  *main - copies content of file to another
  *@argc: arguement count
  *@argv: arguement vector
  *Return: 0
  */
int main(int argc, char *argv[])
{
	int file_from, file_to, r, wr;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	buff = create_buff(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	r = read(file_from, buff, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		wr = write(file_to, buff, r);
		if (file_to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		r = read(file_from, buff, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);
	free(buff);
	close_f(file_from);
	close_f(file_to);

	return (0);
}

/**
  *close_f - close file descriptors
  *@fd: file descriptor
  */

void close_f(int fd)
{
	int c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
  *create_buff - buffer to allocate memory
  *@file: name of file buffer
  *
  *Return: ptr to new allocated buffer
  */

char *create_buff(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}
