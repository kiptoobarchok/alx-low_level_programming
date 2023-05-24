#include <stdio.h>
#include "main.h"

/**
  *_abs - function to compute absolute of a number
  *@n: number whose absolute is to be computed
  *
  *Return: 0
  */

int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
	}
	return (n);
}
