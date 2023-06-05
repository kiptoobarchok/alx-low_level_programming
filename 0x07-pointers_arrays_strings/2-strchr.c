#include <stdio.h>
#include "main.h"

/**
  *_strchr- function to locate a char in string
  *@s:string
  *@c: character to locate
  *Return:pointer to the first occurrence of the character c
  *in the string s, or NULL if the character is not found
  */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	return (NULL);
}
