#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  *main - This function starts the program
  *
  *Description: This program will assign a random number
  *to the variable n each time it is executed
  *Prints the value of the last digit
  *
  *Return: 0
  */


int main(void)
{
	int n,last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last = n % 10;

	if (last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}

	else if (last == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}

	else if (last < 6)
	{

	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);

	}

	return (0);
}
