#include "lists.h"
/**
 *
 *
 *
 *
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
