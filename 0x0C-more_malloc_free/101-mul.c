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
	int mul = 1;

	if (argc > 2)
	{
		for (i = 0; i < argc; i++)
		{
			mul = (atoi(argv[1]) * (atoi(argv[2])));
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

