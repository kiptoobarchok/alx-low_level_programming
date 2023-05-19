#include <stdio.h>

/**
  *main - starts the program
  *
  *Description: prints alphabets in reverse
  *Return: 0
  */

int main(void)
{
	char alpha;

	for (alpha = 'z' ; alpha >= 'a' ; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
