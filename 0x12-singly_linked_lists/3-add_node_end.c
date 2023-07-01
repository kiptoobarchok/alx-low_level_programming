#include "lists.h"

/**
  *add_node_end- function to append a node
  *@head: start of list
  *@str: string to append
  *Return: address of head
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *t = *head;
	int count = 0;

	new = malloc(sizeof(list_t));

	while (str[count])
		count++;

	if (!new)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = count;
	new->next =  NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (t->next)
	{
		t = t->next;
	}
	t->next = new;

	return (new);
}
