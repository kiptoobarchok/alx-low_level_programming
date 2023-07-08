#include "lists.h"

/**
  *delete_nodeint_at_index - function to delete index at given node
  *@head: head
  *@index: index of node to be deleted
  *Return: (1 if success else -1)
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tem = *head;
	listint_t *curr = NULL;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(tem);
		return (1);
	}

	while (i < index - 1)
	{
		if (!tem || !(tem->next))
		{
			return (-1);
		}
		tem = tem->next;
		i++;
	}

	curr = tem->next;
	tem->next = curr->next;
	free(curr);

	return (1);
}
