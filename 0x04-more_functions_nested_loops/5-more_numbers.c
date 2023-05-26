#include "main.h"
#include <stdio.h>

/**
  *more_numbers - function to 0-14 ten times
  *
  */

void more_numbers(void)
{
	int a, b;

	for (a = '0' ; a <= '9'  ; a++)
	{
		for (b = 0 ; b < 15; b++)
		{
			if (b >= 10)
				_putchar('1');
			_putchar(b % 10 + '0');
		}
	_putchar('\n');
	}
}

