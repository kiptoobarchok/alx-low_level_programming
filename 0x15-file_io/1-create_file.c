#include "main.h"

/**
  *create_file - function to create file
  *@filename: text file name
  *@text_content: NULL terminated string written to file
  *
  *Return: 1 - success , -1 - failure
  */

int create_file(const char *filename, char *text_content)
{
	int op, wr, count;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, count);

	if (op == -1 || wr == -1)
	{
		return (-1);
	}
	close(op);

	return (1);
}



