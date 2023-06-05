#include <stdio.h>
#include "main.h"

/**
  *_strpbrk- function that searchesa string for any set of bytes
  *@s: string evaluated
  *@accept: string to compare
  *Return:pointer to the byte in s that matches one of the bytes
  *in accept, or NULL if no such byte is found
  */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *current = accept;

		while (*current != '\0')
		{
			if (*s == *current)
			{
				return (s);
			}
			current++;
		}
		s++;
	}
	return (NULL);
}

