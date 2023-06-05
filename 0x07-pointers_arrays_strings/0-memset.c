#include <stdio.h>
#include "main.h"

/**
  *_memset - function to fill memory with constant byte
  *@s: memory area to be filled
  *@b: char to copy
  *@n: number of times to copy
  *Return: ptr to memory area(s)
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{

		s[a] = b;
	}

	return (s);
}
