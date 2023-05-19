#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  *main - This function starts the program
  *
  *Description: This program will assign a random number
  *to the variable n each time it is executed
  *
  *Return: 0 success
  */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}

	else
	{
		printf("%d is positive\n", n);
	}

	return (0);
}
