#include "lists.h"

/**
  *get_dnodeint_at_index- function to return nth node of linked list
  *@head: head of linked list
  *@index: position
  *Return: NULL if no node
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		if (i == index)
		{
			break;
		}

		head = head->next;
		i++;
	}

	return (head);
}
