#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *array_iterator- function to execute a function
  *given as parametr on elements of array
  *@array: the array
  *@size: size of array
  *@action: pointer
  *
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array && action && size)
	{
		for (a = 0; a < size ; a++)
		{
			action(array[a]);
		}
	}
}
