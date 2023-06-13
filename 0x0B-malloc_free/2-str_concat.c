#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  *str_concat - function to concatenate 2 strings
  *@s1: string one
  *@s2: second string
  *Return: concatenated string, NULL on failure
  */

char *str_concat(char *s1, char *s2)
{
	char *str;

	unsigned int i = 0, j = 0, l1 = 0, l2 = 0;

	while ((s1 && s1[l1]) || (s2 && s2[l2]))
	{
		l1++;
		l2++;
	}

	str = malloc(sizeof(char) * (l1 + l2 + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	j = 0;

	if (s1)
	{
		while (i < l1)
		{
			str[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < (l1 + l2))
		{
			str[i] = s2[j];
			i++;
			j++;
		}
	}

	str[i] = '\0';

	return (str);
}


