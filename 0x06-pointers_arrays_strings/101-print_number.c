#include <stdio.h>
#include "main.h"

/**
  *print_number - function to print intergers
  *@n: number to be printed
  *Return: void
  */

void print_number(int n)
{
	unsigned int n_2;

	if (n < 0)
	{
		_putchar('-');
		n_2 = -n;
	}
	else
	{
		n_2 = n;
	}

	if (n_2 / 10)
	{
		print_number(n_2 / 10);
	}

	_putchar('0' + (n_2 % 10));
}
