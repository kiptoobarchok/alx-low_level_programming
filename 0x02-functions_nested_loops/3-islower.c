#include <stdio.h>
#include "main.h"

/**
  *_islower - checks for lowercase
  *@c: char to be checked
  *
  *Return: 0 or 1
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
