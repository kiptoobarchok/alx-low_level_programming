#include "lists.h"

/**
  *free_dlistint - function to free list
  *@head: head of list
  */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *n;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while ((n = head) != NULL)
		{
			head = head->next;
			free(n);
		}
	}
}
