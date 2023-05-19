#include <stdio.h>

/**
  *main - This function starts the program
  *
  *Description: The program prints alphabets
  *Return: 0
  */

int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		putchar(alphabets);
	}
	putchar('\n');

	return (0);
}
