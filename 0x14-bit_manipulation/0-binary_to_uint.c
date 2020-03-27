#include "holberton.h"

/**
 * binary_to_uint - function to convert binary to unsigned integer
 * @b: binary number being passed
 * Return: 0 if not b is not binary else converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val;

	if (b == NULL)
		return (0);
	for (val = 0; *b; b++)
	{
		if (*b == '1')
			val = (val << 1) | 1;
		else if (*b == '0')
			val <<= 1;
		else
			return (0);
	}
	return (val);
}
