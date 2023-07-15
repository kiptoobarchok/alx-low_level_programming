#include "main.h"

/**
  *read_textfile- function to read a text file and print to the POSIX
  *@filename: text file
  *@letters: number of letters it should read and print
  *Return:actual number of letters it could read and print
  *        if filename is NULL then 0
  *if write fails or does not write the expected amount of bytes, return 0
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, r, wr;

	char *buff;

	if (filename == NULL)
	{
		return (0);
	}

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
	{
		return (0);
	}

	op = open(filename, O_RDONLY);
	r = read(op, buff, letters);
	wr = write(STDOUT_FILENO, buff, r);

	if (op == -1 || r == -1 || wr == -1 || wr != r)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(op);

	return (wr);
}
