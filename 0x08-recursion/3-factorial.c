#include "main.h"
#include <stdio.h>

/**
  *factorial- function that returns the factorial of a given number
  *@n: number
  *Return: n < 0 then -1(error)
  *       0 == 1
  */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
