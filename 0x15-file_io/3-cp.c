#include "main.h"

/**
  *main- entry point
  *@argc: arguement count
  *@argv:arguement vector
  *Return: 0
  */

int main(int argc, char *argv[])
{
	int file_from, file_to, close_error;
	ssize_t count_char, n_write;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	err_file(file_from, file_to, argv);

	count_char = 1024;
	while (count_char == 1024)
	{
		count_char = read(file_from, buffer, 1024);

		if (count_char == -1)
			err_file(-1, 0, argv);

		n_write = write(file_to, buffer, count_char);

		if (n_write == -1)
			err_file(0, -1, argv);
	}
	close_error = close(file_from);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	close_error = close(file_to);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}

/**
  *err_file- checks for successful file opening
  *@file_from: file 1
  *@file_to: file 2
  *@argv: arguement vector
  */

void err_file(int file_from, int file_to, char **argv)
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

