#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * add_node - add node to the first position
 * @head: first node
 * @str: string name
 * Return: number of nodes
 **/
list_t *add_node(list_t **head, const char *str)
{
	int b = 0;
	list_t *newnodo;

	if (head == NULL || str == NULL)
		return (NULL);

	newnodo = malloc(sizeof(list_t));

	if (newnodo == NULL)
	{
		return (NULL);
	}
	newnodo->str = strdup(str);
	if (newnodo->str == NULL)
	{
		free(newnodo);
		return (NULL);
	}

	for (; str[b] != '\0'; ++b)
	{
	}
	newnodo->len = b;
	newnodo->next = *head;
	*head = newnodo;
	return (newnodo);
}
