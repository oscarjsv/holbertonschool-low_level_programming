#include "holberton.h"

/**
 * _isalpha - Checks for lowercase, uppercase or a letter
 * @c: Parameter for the function _isalpha
 *
 * Return: 1 if c is lowercase, letter or uppercase 0 otherwise
 */
int _isalpha(int c)
{
	if ((c > 97 && c < 123) || (c > 65 && c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}