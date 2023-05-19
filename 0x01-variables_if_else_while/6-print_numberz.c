#include <stdio.h>

/**
  *main - starts the program
  *
  *Description: prints numbers 0-9 using putchar
  *Return: 0
  */

int main(void)
{
	int n;

	for (n = 0; n < 10 ; n++)
	{
		char number = n + '0';
		putchar(number);
	}
	putchar('\n');

	return (0);
}
