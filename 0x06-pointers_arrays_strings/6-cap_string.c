#include <stdio.h>
#include "main.h"

/**
  *cap_string - function that capitalizes all words of a string
  *@str: string
  *Return: string
  */

char *cap_string(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			if (a == 0)
			{
				str[a] -= ' ';
			}

			if (str[a - 1] == 32 || str[a - 1] == 9 || str[a - 1] == 10 ||
				str[a - 1] == 44 || str[a - 1] == 59 || str[a - 1] == 46 ||
				str[a - 1] == 33 || str[a - 1] == 63 || str[a - 1] == 34 ||
				str[a - 1] == 40 || str[a - 1] == 41 || str[a - 1] == 123 ||
				str[a - 1] == 124)
			{
				str[a] -= ' ';
			}
		}
		a++;

	}
	return (str);
}
