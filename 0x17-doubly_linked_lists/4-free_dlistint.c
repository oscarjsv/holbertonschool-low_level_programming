#include "lists.h"
/**
 * free_dlistint - liberar memoria
 * @head: puntero al head de mi lista
 *
 */
void free_dlistint(dlistint_t *head)
{

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		head = head->next;
		free(head);
	}
}
