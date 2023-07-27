#include "main.h"

/**
  *set_bit- function to set value of bit at an index to 1
  *@n: number
  *@index: index starting from 0
  *Return: 1 (success) -1(failed)
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int pow;

	if (index > 64)
	{
		return (-1);
	}

	for (pow = 1; index > 0; index--, pow *= 2)
		;

	*n += pow;

	return (1);
}
