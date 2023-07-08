#include "lists.h"

/**
  *insert_nodeint_at_index - function to insert new node at given position
  *@head: head
  *@idx: index of list where new node is added
  *@n: data to insert
  *Return: address of new node or NULL if failed
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *tem = *head;

	new = malloc(sizeof(listint_t));

	if (!new || !head)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; tem && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = tem->next;
			tem->next = new;
			return (new);
		}
		else
		{
			tem = tem->next;
		}
	}

	return (NULL);
}
