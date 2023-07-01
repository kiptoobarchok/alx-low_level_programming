#include "lists.h"
/**
  *free_list- function to free memory list
  *@head: start of list
  */

void free_list(list_t *head)
{
	list_t *h;

	while (head)
	{
		h = head->next;
		free(head->str);
		free(head);
		head = h;
	}
}
