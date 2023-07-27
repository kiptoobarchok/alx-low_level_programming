#include "main.h"

/**
  *clear_bit- function to set value of bit to 0
  *@n: number
  *@index: index
  *Return: 1(success) (-1)- error
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;
	unsigned int temp;

	if (index > 64)
	{
		return (-1);
	}

	temp = index;

	for (a = 1; temp > 0; a *= 2, temp--)
		;

	if ((*n >> index) & 1)
	{
		*n -= a;
	}

	return (1);
}
