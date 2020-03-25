#include "lists.h"
/**
 * listint_len - lenght of a linked list
 * @h: first artument (head)
 * Return: int i containing lenght
 */
size_t listint_len(const listint_t *h)
{
	int b;

	for (b = 0; h != NULL; b++)
	{
		h = h->next;
	}

	return (b);
}
