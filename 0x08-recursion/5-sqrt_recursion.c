#include <stdio.h>
#include "main.h"
int find_sqrt(int n, int start, int end);
/**
  *_sqrt_recursion- function to return natural square root of a number
  *@n: the number
  *Return: -1 if n has no natual sqr root
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (find_sqrt(n, 0, n));

}
/**
  *find_sqrt- function to find natural squareroot of a number
  *@n: the number
  *@start: parameter to represent range for searching sqrt
  *@end: parameter to represent range for searching sqrt
  *Return: resulting sqrroot
  */

int find_sqrt(int n, int start, int end)
{
	int mid = (start + end) / 2;
	int sqr = mid * mid;

	if (start > end)
	{
		return (-1);
	}

	if (sqr == n)
	{
		return (mid);

	}

	else if (sqr > n)
	{
		return (find_sqrt(n, start, mid - 1));
	}
	else
	{
		return (find_sqrt(n, mid + 1, end));
	}

}
