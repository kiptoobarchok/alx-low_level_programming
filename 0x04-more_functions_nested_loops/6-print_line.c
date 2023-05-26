#include "main.h"
#include <stdio.h>

/**
  *print_line - function to primnt line uisng __
  *@n: number of lines to draw
  */

void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n ; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
