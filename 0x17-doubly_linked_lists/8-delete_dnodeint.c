#include "lists.h"

/**
  *delete_dnodeint_at_index- function to delete node
  *@head: head
  *index: pos of node
  *Return: 1- success , -1 failed
  */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h_1;
	dlistint_t *h_2;
	unsigned int a = 0;

	h_1 = *head;

	if (h_1 != NULL)
		while (h_1->prev != NULL)
			h_1 = h_1->prev;

	while (h_1 != NULL)
	{
		if (a == index)
		{
			if (a == 0)
			{
				*head = h_1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				h_2->next = h_1->next;

				if (h_1->next != NULL)
					h_1->next->prev = h_2;
			}
			free(h_1);
			return (1);
		}
		h_2 = h_1;
		h_1 = h_1->next;
		a++;
	}

	return (-1);
}
