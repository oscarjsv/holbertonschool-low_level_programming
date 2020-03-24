#include "lists.h"
/**
 *
 *
 *
 *
 *
 *
 *
 */
void free_listint(listint_t *head)
{
	listint_t *f;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
	f = head;
	head = head->next;
	free(f);
	}
}
