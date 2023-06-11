#include <stdlib.h>
#include <stdio.h>

/**
  *main- function to start program
  *@argc: arguement count
  *@argv: arguement vector
  *Return: 0
  */

int main(int argc, char **argv)
{
	int i;
	int mul;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			mul = i * atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

