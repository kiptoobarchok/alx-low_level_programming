#include "lists.h"

/**
  *find_listint_loop- function to find loop in linked list
  *@head: head
  *Return: address of the node where the loop starts, or NULL if there is no loop
  */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *prev = head;
	listint_t *prev1 = head;

	if (!head)
	{
		return (NULL);
	}

	while (prev && prev1 && prev1->next)
	{
		prev1 = prev1->next->next;
		prev = prev->next;

		if (prev1 == prev)
		{
			prev = prev1;
			while (prev != prev1)
			{
				prev = prev->next;
				prev1 = prev1->next;
			}

			return (prev1);
		}
	}

	return (NULL);
}
