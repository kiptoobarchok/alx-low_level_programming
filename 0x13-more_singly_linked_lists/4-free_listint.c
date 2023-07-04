#include "lists.h"

/**
  *free_listint - function to free list
  *@head: head of the list
  */

void free_listint(listint_t *head)
{
	listint_t *free_list;

	while ((free_list = head) != NULL)
	{
		head = head->next;

		free (free_list);
	}
}
