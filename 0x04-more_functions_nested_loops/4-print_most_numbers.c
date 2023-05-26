#include "main.h"
#include <stdio.h>

/**
  *print_most_numbers - function to print no 0-9 without 2 & 4
  *Return: void
  */

void print_most_numbers(void)
{
	int a;

	for (a = '0' ; a <= '9' ; a++)
	{
		if (a != '2' && a != '4')
		{
			_putchar(a);
		}
	}
	_putchar('\n');
}

