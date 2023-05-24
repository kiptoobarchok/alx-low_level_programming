#include <stdio.h>
#include "main.h"

/**
  *print_alphabet - prints the alphabets
  *
  *
  */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');

}

