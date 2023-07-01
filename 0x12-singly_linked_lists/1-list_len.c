#include "lists.h"

/**
  *list_len - funtcion to print number of elements in list_t
  *@h: list
  *Return: number of elements
  */

size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}

