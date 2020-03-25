#include "lists.h"
/**
 * pop_listint - deletes the head node of a list
 * @head: value to be deleted
 * Return: int value removed n
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
