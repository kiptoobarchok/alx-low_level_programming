#include "main.h"
#include <stdio.h>

/**
  *print_last_digit - function to print last digit of a no.
  *@n: number whose last digit is printed
  *
  *Return: 0
  */

int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
	{
		last = (-1) * last;
	}

	_putchar('0' + last);
	return (last);
}

