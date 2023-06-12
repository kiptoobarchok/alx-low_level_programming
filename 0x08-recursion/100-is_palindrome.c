#include <stdio.h>
#include <string.h>
#include "main.h"

int check(char *s, int start, int end);
/**
  *is_palindrome - function that checks if a string is palindrome
  *@s: string to be checked
  *Return: 1 if palindrome 0 if not
  */

int is_palindrome(char *s)
{
	int l = strlen(s);

	if (l <= 1)
	{
		return (1);
	}

	return (check(s, 0, l - 1));
}

/**
  *check- wrapper function to check if given string is a palindrome
  *@s: string to be checked
  *@start: parameters to rep range with which we are checking if palindrome
  *@end:parameters to rep range with which we are checking if palindrome
  *Return: 0(fails to be a palindrome) or 1(palindrome)
  */
int check(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}

	return (check(s, start + 1, end - 1));
}

