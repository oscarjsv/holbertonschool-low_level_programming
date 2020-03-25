#include "lists.h"
/**
 * print_listint - prints a list of integers
 * @h: initial value
 * Return: int lenght of list i
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
