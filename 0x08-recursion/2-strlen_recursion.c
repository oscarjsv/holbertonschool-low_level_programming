#include "holberton.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: String.
 *
 * Return: Length of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);
}
