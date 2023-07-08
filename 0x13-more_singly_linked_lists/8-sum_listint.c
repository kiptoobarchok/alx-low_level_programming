#include "lists.h"

/**
  *sum_listint - returns sum of all dat ain lst
  *@head: head
  *Return: sum of all data
  */

int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *t = head;

	while (t)
	{
		sum += t->n;
		t = t->next;
	}
	return (sum);
}
