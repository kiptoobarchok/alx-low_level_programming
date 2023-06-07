#include <stdio.h>
#include "main.h"
#include <string.h>

/**
  *_print_rev_recursion- function to print string in reverse
  *@s: string to be modified
  */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
