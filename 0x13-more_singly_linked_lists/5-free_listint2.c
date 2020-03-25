#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: first value
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *f;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		f = *head;
		*head = (*head)->next;
		free(f);
	}

}
