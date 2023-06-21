#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
  *int_index- function to search for integer
  *@array: array
  *@size: size of array
  *@cmp: function pointer to compare values
  *
  *
  *Return: index of first element
  *         -1 if no element matches
  *         and if size <= 0
  **/

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0)
	{
		return (-1);
	}

	if (array && size && cmp)
	{
		for (a = 0; a < size; a++)
		{
			if (cmp(array[a]))
			{
				return (a);
			}
		}
	}

	return (-1);
}
