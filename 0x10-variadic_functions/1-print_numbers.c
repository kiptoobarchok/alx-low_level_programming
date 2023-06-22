#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
  *print_numbers- function to print numbers separated by ,
  *@n: numbers
  *@separator: string printed btw numbers
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			int x = va_arg(args, int);

			printf("%d", x);

			if (i < (n - 1) && separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	va_end(args);

	putchar ('\n');
}
