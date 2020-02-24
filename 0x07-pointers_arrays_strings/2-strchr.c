#include "holberton.h"
#include <stdlib.h>
/**
 * _strchr - locates the 1st occurence of character c.
 * @s: String to travel.
 * @c: Character to locate.
 *
 * Return: The first occurence of a character
 */
char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
			return (s);
		if (!*s)
			return (NULL);
	}
}
