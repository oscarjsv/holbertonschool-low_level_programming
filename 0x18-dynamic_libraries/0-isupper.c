#include "holberton.h"
/**
 * _isupper - checks if it is an uppercase
 * @c: letter to check
 *
 * Return: 1 if lower, 0 if upper
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
		return (0);
}
