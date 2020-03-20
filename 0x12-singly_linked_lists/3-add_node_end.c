#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * add_node_end - add node to the first position
 * @head: first node
 * @str: string name
 * Return: number of nodes
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	int n = 0;
	list_t *newnode;
	list_t *punt;

	newnode = (list_t *)malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	for (; str[n] != '\0';)
		n++;
	newnode->len = n;
	newnode->next = NULL;
	punt = *head;
	if (punt == NULL)
		*head = newnode;
	if (punt != NULL)
	{
		while (punt->next != NULL)
			punt = punt->next;
		punt->next = newnode;
	}
	return (newnode);
}
