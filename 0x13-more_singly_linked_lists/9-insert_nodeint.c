#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Head of the list
 * @idx: Index
 * @n: Value of the new element
 *
 * Return: Address of the new element
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int b;
	listint_t *newnodo;
	listint_t *temp;

	if (head == NULL)
	{
		return (NULL);
	}

	newnodo = malloc(sizeof(listint_t));
	newnodo->n = n;

	newnodo->next = NULL;
	temp = *head;
	if (idx == 0)
	{
		newnodo->next = *head;
		*head = temp;
	}
	for (b = 0; b < idx - 1 && temp != NULL; ++b)
	{
		temp = temp->next;
	}
	if (temp == NULL)
	{
		return (NULL);
	}
	newnodo->next = temp->next;
	temp->next = newnodo;
	return (temp);


}
