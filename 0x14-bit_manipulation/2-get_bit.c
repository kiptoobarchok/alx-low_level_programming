#include "main.h"

/**
  *get_bit- function to return value of bit at given index
  *@n: number
  *@index: index
  *Return: value bit at the index or -1(error)
  */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int temp;

	if (index > 64)
	{
		return (-1);
	}

	temp = n >> index;

	return (temp & 1);
}

