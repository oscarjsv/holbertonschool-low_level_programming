#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates the requested memory
 * @nmemb: size of the string
 * @size: number of bytes
 * Return: requested memory or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *C;
	unsigned int i;

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	C = malloc(nmemb * size);

	if (C != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
		{
			*(C + i) = 0;

		}
		return (C);
	}
	if (C == NULL)
	{
		return (NULL);
	}
	return (NULL);
}
