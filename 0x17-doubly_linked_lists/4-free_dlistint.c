#include "lists.h"
/**
 * free_dlistint - liberar memoria
 * @head: puntero al head de mi lista
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *t;

	while (head)
	{
		t = head->next;
		free(head);
		head = t;
	}
}
