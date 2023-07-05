#include "lists.h"

/**
  *pop_listint- function to delete head node
  *@head: head
  *Return: head node's data
  */

int pop_listint(listint_t **head)
{
	int n;

	listint_t *h;
	listint_t *new;

	while (*head == NULL)
	{
		return (0);
	}

	new = *head;

	n = new->n;
	h = new->next;

	free(new);

	*head = h;

	return (n);
}
