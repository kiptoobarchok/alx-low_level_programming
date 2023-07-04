#include "lists.h"

/**
  *add_nodeint_end - function to append a node
  *@head: lists head
  *@n: elemnt added
  *Return: address of new element, NULL if failed
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *end;
	listint_t *temp;

	end = malloc(sizeof(listint_t));

	while (end == NULL)
	{
		return (NULL);
	}

	end->n = n;
	end->next = NULL;
	temp = *head;

	if (*head == NULL)
	{
		*head = end;
	}

	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = end;
	}

	return (*head);
}
