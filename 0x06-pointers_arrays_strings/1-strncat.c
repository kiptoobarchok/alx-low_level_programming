#include <stdio.h>
#include "main.h"

/**
  *_strncat- function to link two strings
  *@dest: string 1
  *@src: string 2
  *@n: size
  *Return: linked string
  */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;

	while (dest[a]) /*find end of destination string*/
	{
		a++;
	}

	for (b = 0 ; b < n && src[b] != '\0'; b++)
	{
		dest[a + b] = src[b];
	}

	dest[a + b] = '\0';

	return (dest);
}
