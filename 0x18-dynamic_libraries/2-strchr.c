#include "holberton.h"
#include <stdlib.h>
/**
 * _strchr - Function that locate character in a string
 * @s: pointer to a char
 * @c: char for comparison
 * Return: NULL if char not found, or pointer to first occurrence of char `c`
 */

char *_strchr(char *s, char c)
{
	if (!s)
		return (s);

	for (; s != 0 ; s++)
	{
		if (*s == c)
			return (s);

		else if (*s == 0)
			return (NULL);

	}

	return (s);
}