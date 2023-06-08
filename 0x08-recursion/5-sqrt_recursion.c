#include <stdio.h>
#include "main.h"

/**
  *_sqrt_recursion- function to return natural square root of a number
  *@n: the number
  *Return: -1 if n has no natual sqr root
  */
int act_sqrrec(int n, int i);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (act_sqrrec(n, 0));

}
/**
  *act_sqrrec- function to find natural squareroot of a number
  *@n: the number
  *@i: sqrroot
  *Description: iterates through the number
  *Return: resulting sqrroot
  */

int act_sqrrec(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);

	}
	return (act_sqrrec(n, i + 1));
}
