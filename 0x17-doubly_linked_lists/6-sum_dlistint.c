#include "lists.h"
/**
 * sum_dlistint - sum all the data
 * @head: first element copy
 * Return: int sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	int i, sum;

	i = sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		i = head->n;
		sum += i;
		head = head->next;
	}
	return (sum);
}
