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
	int start = 0;
	int end = l - 1;

	while (start < end)
	{
		if (s[start] != s[end])
		{
			return (0);
		}
		start++;
		end--;
	}
	return (1);
}
