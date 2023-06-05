#include <stdio.h>
#include "main.h"

/**
  *_strspn- function to give length of a prefix substring
  *@s: string to evaluate
  *@accept: string containing list of char to match
  *Return: the number of bytes in the initial segment of
  *which consist only of bytes from accept
  */

unsigned int _strspn(char *s, char *accept)
{
	char *b;

	char *a;

	unsigned int count = 0;

	for (b = s; *b != '\0'; b++)
	{
		for (a = accept; *a != '\0'; a++)
		{
			if (*b == *a)
			{
				count++;
				break;
			}
		}

		if (*a == '\0')
		{
			return (count);
		}
	}

	return (count);
}
