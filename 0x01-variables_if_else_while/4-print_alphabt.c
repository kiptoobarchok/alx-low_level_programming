#include <stdio.h>

/**
  *main - starts the program
  *
  *Description: Prints alphabets without q and e
  *Return: 0
  */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'e' && alpha != 'q')
		{
			putchar(alpha);
		}
		alpha++;
	}

	putchar('\n');

	return (0);
}
