#include "lists.h"
/**
 * free_listint - frees a list of int
 * @head: first argument
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *f;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
	f = head;
	head = head->next;
	free(f);
	}
}
