#include "holberton.h"
/**
 * reverse_array - reverse
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int fin;

	while (i < (n / 2))
	{
		fin = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = fin;

		i++;
	}
}
