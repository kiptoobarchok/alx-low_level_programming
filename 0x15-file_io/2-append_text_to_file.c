#include "main.h"
/**
  *append_text_to_file - function to append text tio end of file
  *@filename: text file name
  *@text_content: NULL terminated string to add to end of string
  *
  *Return: 1(success) , -1(failure)
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, count = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content  != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, count);

	if (op == -1 || wr == -1)
	{
		return (-1);
	}

	close(op);

	return (1);
}
