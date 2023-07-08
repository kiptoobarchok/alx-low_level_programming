#include "lists.h"

/**
  *free_listint2  - function to free list
  *@head:  head of the linked list
  *
  */

void free_listint2(listint_t **head)
{
	listint_t *tem;

	while (head == NULL)
	{
		return;
	}

	while (*head)
	{
		tem = (*head)->next;
		free(*head);
		*head = tem;
	}

	*head = NULL;
}
