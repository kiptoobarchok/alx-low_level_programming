#include <stdio.h>
#include "main.h"

/**
  *_strncpy- function that copies a string
  *@dest: string 1
  *@src:string 2
  *@n: size of src
  *
  *Return: copied string
  */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0 ; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
