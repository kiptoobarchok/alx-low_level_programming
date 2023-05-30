#include "main.h"
#include <string.h>
#include <stdio.h>

/**
  *puts_half- function to print half a string
  *@str: string
  *Return: void
  */

void puts_half(char *str)
{
	int len = strlen(str);
	int n;

	for (len = 0; str[len] != '\0' ; len++)

	if (len % 2 != 0)
	{
		for (n = ((len - 1) / 2) + 1; str[n] != '\0' ; n++)
		{
			_putchar(str[n]);
		}
	}

	else
	{
		for (n = len / 2; str[n] != '\0'; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
