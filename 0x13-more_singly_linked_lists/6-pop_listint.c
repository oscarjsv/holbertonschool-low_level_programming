#include "lists.h"
/**
 *
 *
 *
 *
 *
 */
int pop_listint(listint_t **head)
{
	int b;
	listint_t *nododele;
	listint_t *nextnode;

	if (*head == NULL)
	{
		return (0);
	}

	nododele = *head;
	nextnode = (*head)->next;

	b = nododele->n;
	*head = nextnode;
	free(nododele);
	return (b);
}
