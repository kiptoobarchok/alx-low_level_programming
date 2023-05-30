#include <stdio.h>
#include "main.h"

/**
  *_puts - function to print out a string
  *@str: string to be printed out
  *Return: void
  */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}

	_putchar('\n');

}
