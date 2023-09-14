#include "lists.h"
#include <stddef.h>
#include <stdio.h>


/**
  *print_dlistint - function to print all elements of a list
  *@h: ptr to head of list
  *Return: no. of nodes in list
  */

size_t  print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
