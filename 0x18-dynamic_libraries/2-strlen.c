#include "holberton.h"
/**
 * _strlen - Function that returns the length of a string.
 * @s: Char pointer to "Holberton!" msg
 *
 * Return: Length of *s
 */
int _strlen(char *s)
{
	int c;

	c = 0;
	while (*s)
	{
		s++;
		c++;
	}
	return (c);
}