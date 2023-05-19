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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int last_digit = n % 10;

	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}

	else if (last_digit == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}

	else if (last_digit < 6)
	{

	printf("Last digit of %d and is less than 6 and not 0\n", n);

	}

	return (0);
}
