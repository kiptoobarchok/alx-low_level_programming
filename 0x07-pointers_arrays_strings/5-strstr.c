#include <stdio.h>
#include "main.h"

/**
  *_strstr- function to locate substring
  *@haystack: string to evaluate
  *@needle: string to locate
  *Return: pointer to the beginning of the located substring,
  *or NULL if the substring is not found.
  */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}

	return (NULL);
}
