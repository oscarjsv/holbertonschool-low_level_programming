#include "holberton.h"
#include <stdlib.h>
/**
 * _strlen - Print a square
 *@s:  Size of the square
 * Return: n
 */
int _strlen(char *s)
{

	int n;

	for (n = 0; *s != '\0'; s++)
	{
		n++;
	}

	return (n);
}
/**
 * create_array - creates the array
 * @size: size of the array
 * @c: value of the array
 * Return: pointer to the array, or NULL if
 * it fails.
 */
char *_strdup(char *str)
{
	char *p;
	int i;
	int size = _strlen(str);

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(char) * size);
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= size; i++)
	{
		p[i] = str[i];
	}
	p[i] = 0;
	return (p);
}
