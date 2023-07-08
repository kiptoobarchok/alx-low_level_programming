#include "lists.h"

/**
  *get_nodeint_at_index - function to return nth node of a list
  *@head: head
  *@index: position of the nth node
  *Return: nth node's index
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	for (a = 0; a < index && head != NULL; a++)
	{
		head = head->next;
	}

	return (head);
}
