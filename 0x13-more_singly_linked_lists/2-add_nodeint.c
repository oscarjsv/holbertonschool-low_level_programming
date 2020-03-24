#include "lists.h"
/**
 *
 *
 *
 *
 *
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnodo;

	newnodo = malloc(sizeof(listint_t));
	if (newnodo == NULL)
	{
		return (NULL);
	}
	newnodo->n = n;
	newnodo->next = *head;
	*head = newnodo;
	return (NULL);
}
