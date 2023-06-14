#include <stdio.h>
#include <stdlib.h>

/**
  *main- function to start the program
  *@argc:arguemnt count
  *@argv: arguemnt vector
  *Return: 1 if error  0(successs)
  */

int main(int argc, char **argv)
{
	int i, j, total = 0;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!((argv[i][j] >= '0' && argv[i][j] <= '9') || argv[i][j] == '-'))
			{
				printf("Error\n");
				return (1);
			}

			total += atoi(argv[i]);
		}
	}

		printf("%d\n", total);
		return (0);

}
