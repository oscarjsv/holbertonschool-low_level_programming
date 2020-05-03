#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node
 * @head: first node
 * @index: node that I want
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a;

	a = 0;

	while (head != NULL)
	{
		if (a == index)
			return (head);
		head = head->next;
		a++;
	}
	return (NULL);
}
