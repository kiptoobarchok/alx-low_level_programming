#include <stdio.h>
#include "main.h"

/**
  *_strcat - function to concantenate 2 strings
  *@dest: string 1
  *@src: string 2
  *Return: linked string
  */

char *_strcat(char *dest, char *src)
{
	int a = 0;

	int b;

	while (dest[a])
	{
		a++;
	}

	for (b = 0; src[b] != '\0' ; b++)
	{
		dest[a++] = src[b];
	}

	return (dest);
}
