#include <stdio.h>

/**
  *main - function starts the program
  *
  *Description: Prints alphabets in upper and lower case
  *Return: 0
  */

int main(void)
{
	char a, A;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	for (A = 'A'; A <= 'Z'; A++)
	{
		putchar(A);
	}

	putchar('\n');


	return (0);
}
