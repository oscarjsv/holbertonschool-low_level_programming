#include "lists.h"
/**
 * dlistint_len - counter leng of list
 * @h: pointer head
 *
 * Return: b counter
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t b = 0;
	const dlistint_t *temp = h;

	if (h == NULL)
	{
		return (0);
	}
	while (temp != NULL)
	{
		temp = temp->next;
		b++;
	}
	return (b);
}
