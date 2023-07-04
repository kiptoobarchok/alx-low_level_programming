#include "lists.h"

/**
  *listint_len- function to print no of elemnts
  *@h: head of linked list
  *Return: number of elemnts in list
  */

size_t listint_len(const listint_t *h)
{
	size_t no_elements = 0;

	while (h != NULL)
	{
		h = h->next;
		no_elements++;
	}

	return (no_elements);
}
