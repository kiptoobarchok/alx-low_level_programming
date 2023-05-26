#include "main.h"
#include <stdio.h>

/**
  *print_square - function to print square usig #
  *@size: number # used to make square
  *Return: void
  */

void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (a = 0 ; a < size ; a++)
	{
		for (b = 0 ; b < size ; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
