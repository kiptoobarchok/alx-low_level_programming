#include <stdio.h>

/**
  *main - starts the program
  *
  *Description: prints 0123456789abcdef
  *Return: 0
  */

int main(void)
{
	int n;
	char a;

	for (n = 0 ; n < 10 ; n++)
	{
		printf("%d", n);
	}
	for (a = 'a' ; a < 'g' ; a++)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
