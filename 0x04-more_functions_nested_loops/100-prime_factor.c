#include <stdio.h>
#include <math.h>

/**
  *main - function to start the program
  *Return: 0
  */

int main(void)
{
	long a, max;
	long n = 612852475143;
	double sqr = sqrt(n);

	for (a = 1; a <= sqr ; a++)
	{
		if (n % a == 0)
		{
			max = n / a;
		}

		printf("%ld", max);

	}
	return (0);
}

