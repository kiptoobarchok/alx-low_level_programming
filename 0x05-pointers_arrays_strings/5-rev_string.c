#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  *rev_string - function to print string in reverse
  *@s: string
  *Return: void
  */

void rev_string(char *s)
{
	int len = strlen(s);
	int i;

	for (i = len - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	putchar('\n');
}
