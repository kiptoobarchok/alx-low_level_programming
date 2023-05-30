#include <stdio.h>
#include "main.h"

/**
  *puts2 - function to print out even numbers
  *@str: string
  *Return: void
  */

void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
	}
		_putchar('\n');
}

