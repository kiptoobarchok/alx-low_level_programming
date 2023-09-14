#include "lists.h"

/**
  *dlistint_len - return no. of elements
  *@h: head of list
  *Return: no. of elements in lined list
  */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		return (i);
	}

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
