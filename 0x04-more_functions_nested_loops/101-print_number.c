#include <stdio.h>
#include "main.h"

/**
  *print_number- function to print a number
  *@n: number to be printed
  *Return: void
  */

void print_number(int n)
{
	if (n >= 10)
	{
		print_number(n / 10);
	}

	if (n == 0)
	{
		_putchar(0);
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	_putchar('0' + (n % 10));
}
