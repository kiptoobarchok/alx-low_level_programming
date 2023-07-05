#include "lists.h"

/**
  *free_listint2  - function to free list
  *@head:  head of the linked list
  *
  */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *new;

	while (head != NULL)
	{
		new = *head;

		while ((temp = new) != NULL)
		{
			new = new->next;
			free(temp);
		}
		*head = NULL;
	}
}

