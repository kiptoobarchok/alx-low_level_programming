#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  *is_palindrome - function that checks if a string is palindrome
  *@s: string to be checked
  *Return: 1 if palindrome 0 if not
  */

int is_palindrome(char *s)
{
	int l = strlen(s);
	int i, j;

	for (i = 0, j = l - 1; i < j; i++, j--)
	{
		if (s[i] != s[j])
		{
			return (0);
		}
	}
	return (1);
}
