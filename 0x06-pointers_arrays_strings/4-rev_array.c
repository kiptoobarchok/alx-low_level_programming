#include <stdio.h>
#include "main.h"

/**
  *reverse_array - function to reverse content of on array of integers
  *@a: array name
  *@n: number of array elements
  *Return: void
  */

void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		int swap = a[start];

		a[start] = a[end];

		a[end] = swap;

		start++;
		end--;
	}
}
