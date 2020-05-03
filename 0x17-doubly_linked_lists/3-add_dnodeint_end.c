#include "lists.h"
/**
 *add_dnodeint_end - listashvdb<shb >
 *@n: dato
 *@head: cabeza de lista
 *Return: newnodo
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnodo, *h;

	h = *head;

	if (head == NULL)
	{
		return (NULL);
	}
	newnodo = malloc(sizeof(dlistint_t));
	if (newnodo == NULL)
	{
		return (NULL);
	}
	newnodo->n = n;
	newnodo->next = NULL;
	newnodo->prev = NULL;
	if (*head == NULL)
	{
		*head = newnodo;
		return (newnodo);
	}
	while (h != NULL && h->next)
	{
		h = h->next;
	}
	newnodo->prev = h;
	h->next = newnodo;

	return (newnodo);
}
