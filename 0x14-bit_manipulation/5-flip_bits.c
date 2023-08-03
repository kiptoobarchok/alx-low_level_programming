#include "main.h"

/**
  *flip_bits-flip bits to convert one number to another
  *@n: number
  *@m: sec number
  *Return: no of bits needed to flip
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d;
	int i = 0;

	d = n ^ m;

	while (d)
	{
		i++;
		d &= (d - 1);
	}

	return (i);
}
