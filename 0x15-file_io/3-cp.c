#include <stdio.h>
#include "main.h"

/**
  *no_file - function to check if file exists
  *@file_from: file from
  *@file_to: file to cpy text to
  *@argv: arguement vector
  */

void no_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[1]);
		exit(99);
	}

}

/**
  *main - entry point
  *@argc: arguement count
  *@argv: arguement vector
  *Return: 0
  */
int main(int argc, char *argv[])
{
	int file_from, file_to, close_err;
	ssize_t n_char, n_wr;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	no_file(file_from, file_to, argv);

	n_char = 1024;

	while (n_char == 1024)
	{
		n_char = read(file_from, buff, 1024);
		if (n_char == -1)
		{
			no_file(-1, 0, argv);
		}
		n_wr = write(file_to, buff, n_char);
		if (n_wr == -1)
			no_file(0, -1, argv);
	}
	close_err = close(file_from);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	close_err = close(file_to);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
