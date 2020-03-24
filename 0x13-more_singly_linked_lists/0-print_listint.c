#include "lists.h"
/**
 *
 *
 *
 *
 */
size_t print_listint(const listint_t *h)
{
	int b;

	for (b = 0; h != NULL; b++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (b);
}
