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
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - ('a' - 'A');
		}
		str++;
	}

	return (str);
}

