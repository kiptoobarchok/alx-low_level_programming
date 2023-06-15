#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
  *_calloc- function that allocates memory for an array using malloc
  *@nmemb: number of array elements
  *@size: size of memory to allocate in bytes
  *Return: pointer to allocated memory
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int c, i;

	char *a, *b;

	c = nmemb * size;

	a = b = malloc(c);

	if ((nmemb || size) == 0)
	{
		return (NULL);
	}

	for (i = 0; i < c; i++)
	{
		*a++ = 0;
	}

	return (b);
}
