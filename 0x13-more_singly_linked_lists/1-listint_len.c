#include "lists.h"

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
