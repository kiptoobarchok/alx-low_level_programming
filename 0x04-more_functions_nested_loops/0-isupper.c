#include "main.h"
#include <stdio.h>

/**
  *_isupper - function to check if a char is uppercase
  *@c: char to be checked
  *
  *Return:0
  */

int _isupper(int c)
{
	if (c == 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
