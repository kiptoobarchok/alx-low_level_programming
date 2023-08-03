#include "main.h"

/**
  *print_binary- function to print binary representation
  *@n: number
  */

void print_binary(unsigned long int n)
{
	int s;
	unsigned long int tem;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (tem =  n, s = 0; (tem >>= 1) > 0; s++)
		;

	for (; s >= 0; s--)
	{
		if ((n >> s) & 1)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}

}
