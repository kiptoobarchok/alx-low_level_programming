#include <stdio.h>
#include "main.h"

/**
  *_strcat - function to concantenate 2 strings
  *@dest: string 1
  *@src: string 2
  *Return: 0
  */

char *_strcat(char *dest, char *src)
{
	while (*dest)
	{
		dest++;
	}

	while (*src)
	{
		*dest = *src;

		dest++;
		src++;
	}
	*dest = '\0';

	return (0);
}
