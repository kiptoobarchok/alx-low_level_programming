#include "main.h"
#include <stdio.h>

/**
  *swap_int - function to swap values of two integers
  *@a: 1st number
  *@b: 2nd number
  *Return: void
  */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
