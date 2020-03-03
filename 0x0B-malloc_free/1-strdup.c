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
 * _strdup - copies a given string
 * @str: string
 * Return: new string or NULL if its empty
 */
char *_strdup(char *str)
{
	char *p;
	int i;
	int size = _strlen(str) + 1;

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(char) * size);
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		p[i] = str[i];
	}
	p[i] = 0;
	return (p);
}
