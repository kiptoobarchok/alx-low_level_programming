#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
  *main- prints calculator result
  *@argc: arguement count
  *@argv: arguemnt vector
  *
  *Return: 0 - success, 98 - argc error, 100 - div == 0
  */

int main(int argc, char **argv)
{
	int (*optr)(int, int), num1, num2;

	if (argc != 4)
	{
		printf("Error\n"), exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	optr = get_op_func(argv[2]);

	if (!optr)
	{
		printf("Error\n");
		exit(99);
	}

	if (!num2 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", optr(num1, num2));

	return (0);
}
