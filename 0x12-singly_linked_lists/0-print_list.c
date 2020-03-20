#include "lists.h"
/**
 * print_list - print the list of the struct
 * @h: point to the safe node
 *
 * Return: value b
 *
 */
size_t print_list(const list_t *h)
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
		if (tem->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", tem->len, tem->str);
		}
		tem = tem->next;
	}
	return (b);
}
