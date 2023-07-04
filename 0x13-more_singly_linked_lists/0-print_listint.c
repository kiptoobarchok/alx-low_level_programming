#include "lists.h"

/**
  *print_listint - function to print number of nodes
  *@h: head
  *Return: number of nodes
  */

size_t print_listint(const listint_t *h)
{

	size_t no_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		no_nodes++;
	}

	return (no_nodes);

}
