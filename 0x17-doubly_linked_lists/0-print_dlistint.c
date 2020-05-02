#include "lists.h"
/**
 * print_dlistint - print the list of the struct
 * @h: point to safe node
 *
 * Return: value b
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t b = 0;
	const dlistint_t *temp = h;

	if (h == NULL)
	{
		return (0);
	}
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		b++;
	}
	return (b);
}
