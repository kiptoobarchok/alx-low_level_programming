#include "main.h"
#include <stdio.h>

/**
  *print_diagonal - function to print diagonal line on terminal
  *@n: number of diagonals to draw
  */

void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n ; a++)
		{
			for (b = 0 ; b < a ; b++)
			{
				_putchar(' ');
			}
		_putchar(92);
		_putchar('\n');
		}
	}
}
