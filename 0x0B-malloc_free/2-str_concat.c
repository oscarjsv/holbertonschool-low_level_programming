#include "holberton.h"
#include <stdlib.h>
/**
 * _strlen - Print a square
 * @s:  Size of the square
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
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: two strins or Null
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, b;
	int size1;
	int size2;

	if (s1 == NULL)
	{
		return (NULL);
	}
	if (s2 == NULL)
	{
		return (NULL);
	}
	size1 = _strlen(s1);
	size2 = _strlen(s2) + 1;

	p = malloc(size1 + size2);
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size1; i++)
	{
		p[i] = s1[i];
	}
	for (b = 0; b < size2; b++, i++)
	{
		p[i] = s2[b];
	}
	p[i] = s2[b];
	return (p);
}
