#include <stdio.h>

/**
  * main - This function starts the program
  *
  *Description: prints the size of various data types
  *Return: 0
  */

int main(void)
{
	char c;
	int i;
	long int long_int;
	long long int too_long;
	float decimal;

	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %ld byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long_int));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(too_long));
	printf("Size of a float: %ld byte(s)\n", sizeof(decimal));

	return (0);
}
