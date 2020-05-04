#include "holberton.h"

/**
 * _islower - Checks for lowercase character
 * @c: Parameter for the function _islower
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c > 97 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}