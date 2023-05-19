#include <stdio.h>

/**
  *main - starts the program
  *
  *Description: prints numbers 0-9
  *Return: 0
  */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	putchar('\n');

	return (0);
}
