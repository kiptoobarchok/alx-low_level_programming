#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  *print_all - function to print anything
  *@format: list of types of args passed to the function
  */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;

	char *str;

	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i++])
		{
			case 's':
				str = va_arg(args, char *);
				printf("%s", str != NULL ? str : "(nil)");
				break;

			case 'c':
				printf("%c", va_arg(args, int));
				break;

			case 'i':
				printf("%d", va_arg(args, int));
				break;

			case 'f':
				printf("%f", va_arg(args, double));
				break;

			default:
				continue;
		}
		if (format[i])
		{
			printf(", ");
		}
	}
	putchar ('\n');
}
