#include <stdio.h>
#include "main.h"

/**
  *_strcmp- function to compare two strings
  *@s1: string 1
  *@s2: string 2
  *Return: 0 if s1 == s2
  *        -ve if s1 < s2
  *	  +ve if s1 > s2
  */

int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int diff;

	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			diff = s1[a] - s2[a];
		}

		else
		{
			diff = s1[a] - s2[a];
		}
		a++;

	}

	return (diff);
}

