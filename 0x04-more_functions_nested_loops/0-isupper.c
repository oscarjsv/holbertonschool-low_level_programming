#include "holberton.h"
/**
 * _isupper - printf is lower
 * @c: An ascii char to compare
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	int v;

	for (v = 'a'; v <= 'z'; v++)
	{
		if (v == c)
			return (1);
	}
	return (0);
}
