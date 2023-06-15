#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
  *array_range- function that creates array of intergers
  *@min: minimum range of values
  *@max:maximum range of values
  *Return: pointer to newly created array
  */

int *array_range(int min, int max)
{
	int *p;
	int i, size;

	size = max - min + 1;

	p = malloc(sizeof(int) * size);

	if (min > max || p == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		p[i] = min++;
	}

	return (p);
}

