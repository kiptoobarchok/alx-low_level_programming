#include "lists.h"

/**
  *add_nodeint- function to prepend a node
  *@head: head of list
  *@n: element added
  *Return: NULL if element added failed or address of elemnt added
  *
  */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *add;

	add = malloc(sizeof(listint_t));

	while (add  == NULL)
	{
		return (NULL);
	}

	add->n = n;
	add->next = *head;
	*head = add;

	return (*head);
}
