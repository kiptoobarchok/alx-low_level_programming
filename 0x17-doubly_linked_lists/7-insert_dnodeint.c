#include "lists.h"

/**
  *insert_dnodeint_at_index - function to insert node
  *@h: head
  *@idx: postion of new node
  *@n: value to be added
  *Return: address of new node, NULL if absent
  */


dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *curr = *h;
	unsigned int a = 0;

	if (new == NULL)
	return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		if (*h != NULL)
		(*h)->prev = new;
		*h = new;
		return (new);
	}

	while (curr != NULL && a < idx - 1)
	{
		curr = curr->next;
		a++;
	}

	if (curr == NULL)
	{
		free(new);
		return (NULL);
	}

	new->prev = curr;
	new->next = curr->next;

	if (curr->next != NULL)
	curr->next->prev = new;

	curr->next = new;

	return (new);
}
