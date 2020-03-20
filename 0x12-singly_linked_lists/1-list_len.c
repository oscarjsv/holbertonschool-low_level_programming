#include "lists.h"
/**
 * list_len - print the size
 * @h: point to the safe node
 *
 * Return: value b
 *
 */
size_t list_len(const list_t *h)
{
	size_t b;
	const list_t  *tem;

	tem = h;

	if (h == NULL)
	{
		return (0);
	}
	for (b = 0; tem != NULL; b++)
	{
		tem = tem->next;
	}
	return (b);
}
