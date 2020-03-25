#include "lists.h"
/**
 * add_nodeint_end - new node at the end
 * @head: first value
 * @n: data
 * Return: new node at the end
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnodo;
	listint_t *other;

	newnodo = malloc(sizeof(listint_t));
	if (newnodo == NULL)
	{
		free(newnodo);
		return (NULL);
	}


	newnodo->n = n;
	newnodo->next = NULL;
	other = *head;
	if (*head == NULL)
	{
		*head = newnodo;
		return (newnodo);
	}
	if (other != NULL)
	{
		while (other->next != NULL)
			other = other->next;
		other->next = newnodo;
	}
	return (newnodo);
}
