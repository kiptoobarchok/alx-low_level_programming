#include <stdio.h>
#include "main.h"

/**
  *prime- function to check for prime number
  *@n: number to be checked
  *@i: to check if n is divisible
  *Return: 1 if prime else 0
  */

int prime(int n, int i);


int prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}

	return (prime(n, i - 1));
}

/**
  *is_prime_number- function to check if number is a prime number
  *@n: the number
  *Return: 1 if prme else 0
  */

int is_prime_number(int n)
{
	if (n < 3)
	{
		return (0);
	}

	return (prime(n, n - 1));
}
