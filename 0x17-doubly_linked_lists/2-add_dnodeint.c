#include "lists.h"
/**
 * add_dnodeint - anade un nodo
 *
 * @n: value
 * @head : cabeza de lista
 * Return: new nodo
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnodo;

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
	newnodo->next = *head;
	(*head)->prev = newnodo;
	*head = newnodo;

	return (newnodo);
}
