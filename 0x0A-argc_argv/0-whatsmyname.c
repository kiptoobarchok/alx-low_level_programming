#include <stdio.h>
#include <stdlib.h>

/**
  *main- function to start the program
  *@argc: arguement count
  *@argv: arguement vector(array of strings)
  *Return: 0
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

