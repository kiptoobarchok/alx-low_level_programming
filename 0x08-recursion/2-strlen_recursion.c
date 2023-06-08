#include <stdio.h>
#include "main.h"
#include <string.h>

/**
  *_strlen_recursion- function to return length of string
  *@s: string
  *Return: length
  */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (strlen(s));
	}
	return (0);	
}
