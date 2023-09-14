#include "lists.h"

/**
  *add_dnodeint - function to add new node at the beginning
  *@head: ptr to pointer to head of list
  *@n: value to be added
  *Return: address of new node
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new;
	}

	*head = new;

	return (new);
}
