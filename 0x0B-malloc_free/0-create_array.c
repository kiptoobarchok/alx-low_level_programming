#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  *create_array- 
  *@size:
  *@c:
  *Return: NULL if size = 0 or pointer to array
  */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
