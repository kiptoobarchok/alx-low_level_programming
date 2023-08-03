#include "main.h"

/**
  *binary_to_uint - function to convert binary to unsigned int
  *@b: string
  *Return: decimal no. or 0(if no ther convertible char)
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n, pow;
	int count;

	if (b == NULL)
	{
		return (0);
	}

	for (count = 0; b[count]; count++)
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);

	}

	for (pow = 1, n = 0, count--; count >= 0; count--, pow *= 2)
	{
		if (b[count] == '1')
		{
			n += pow;
		}
	}

	return (n);
}
