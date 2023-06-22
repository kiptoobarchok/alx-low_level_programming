#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
  *sum_them_all- function to add parameters
  *@n: number of arguments
  *Return: sum
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int s = 0;

	va_list args;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		s += x;
	}
	va_end(args);

	return (s);
}
