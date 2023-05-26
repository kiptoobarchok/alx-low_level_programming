#include "main.h"
#include <stdio.h>

/**
  *_isdigit - checks if int is a digit
  *@c: int to be checked
  *Return: 0
  */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
