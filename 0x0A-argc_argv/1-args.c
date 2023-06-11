#include <stdlib.h>
#include <stdio.h>

/**
  *main -function to start program
  *@argc: arguement count
  *@argv: arguement vector
  *Return: 0
  */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
