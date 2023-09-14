#include "lists.h"

/**
  *sum_dlistint - function to return sum of all elements
  *@head: head of list
  *Return: sum of data
  */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}

	}

	return (sum);
}
