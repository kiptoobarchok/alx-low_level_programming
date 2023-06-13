#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
  *_strdup- functiion to work same as strdup (in stdlib)
  *@str: given string
  *Return: pointer to coped string and NULL if insufficient memory
  */

char *_strdup(char *str)
{
	char *dup;
	int i, l = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[l] != '\0')
		l++;

	dup = (char *)malloc((sizeof(char) * l) + 1);

	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < l; i++)
	{
		dup[i] = str[i];

		dup[l] = '\0';
	}

	return (dup);
}

