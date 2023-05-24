#include <stdio.h>
#include "main.h"

/**
  *_isalpha - function to check for lowercase or uppercase
  *@c: char to be checked
  *
  *Return: 0
  */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||( c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
