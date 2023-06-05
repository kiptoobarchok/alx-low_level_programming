#include <stdio.h>
#include "main.h"

/**
  *print_diagsums - function to print sum of diagonals in a sqr matrix
  *@a: array of matrices
  *@size: size of matrix
  */

void print_diagsums(int *a, int size)
{
	int i;

	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + 1];
		sum2 += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", sum1, sum2);
}
