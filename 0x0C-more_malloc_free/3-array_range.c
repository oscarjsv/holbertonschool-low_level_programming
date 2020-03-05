#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - create an array of integers
 * @min: min value
 * @max: max value
 * Return: array of integers or NULL
 */

int *array_range(int min, int max)
{
	int a, j;
	j = 0;
	int *C;

	if (min > max)
	{
		return (NULL);
	}

	C = malloc(sizeof(*C) * max - min + 1);
	if (C == NULL)
	{
		return (NULL);
	}
	for (a = min; a <= max; a++, j++)
		C[j] = a;

	return (C);
}
