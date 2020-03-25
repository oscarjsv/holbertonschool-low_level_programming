#include "lists.h"
/**
 * add_nodeint - adds a node to the beginning
 * @head: element to be added
 * @n: number to be added
 * Return: new head adress
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
	return (newnodo);
}
