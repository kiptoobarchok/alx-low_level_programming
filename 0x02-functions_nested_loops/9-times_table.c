#include <stdio.h>
#include "main.h"

/**
  *times_table - function to prints 9 times table
  *
  *Return: void
  */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int r = j * i;

			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + (r / 10));
			_putchar('0' + (r % 10));
		}
		_putchar('\n');
	}
}
