#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  *print_strings- function to print string
  *@separator: string printed in btw the strings printed
  *@n: number of strings
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n ; i++)
	{
		str = va_arg(args, char *);

		printf("%s", str != NULL ? str : "(nil)");

		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	putchar ('\n');

	va_end(args);
}
