#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - creates the array
 * @size: size of the array
 * @c: value of the array
 * Return: pointer to the array, or NULL if
 * it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(char) * size);

	for (i = 0; i <= size; i++)
	{
		p[i] = c;
	}
	p[i] = 0;
	return (p);
}
