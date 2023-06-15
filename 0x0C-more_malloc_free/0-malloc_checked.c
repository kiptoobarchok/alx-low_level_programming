#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *malloc_checked- function to allocate memory using malloc
  *@b:size of memory to allocate
  */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
