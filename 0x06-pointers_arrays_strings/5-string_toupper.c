#include <stdio.h>
#include "main.h"

/**
  *string_toupper-funtion to change
  *all lowercase letters of a string to uppercase.
  *@str: string to convert
  *Return: str upper
  */

char *string_toupper(char *str)
{
	int a = 0;

	while (str[a])
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			str[a] = str[a] - ('a' - 'A');
		}
		a++;
	}

	return (str);
}

