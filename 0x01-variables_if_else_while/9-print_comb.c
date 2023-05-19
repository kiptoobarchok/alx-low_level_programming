#include <stdio.h>

/**
  *main - starts the program
  *
  *Dsecription:prints all possible combinations of single-digit numbers
  *Return: 0
  */


int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0');

		if (n != 9)
		{
			putchar(',');
		}
		n++;
	}

	putchar('\n');

	return (0);
}
