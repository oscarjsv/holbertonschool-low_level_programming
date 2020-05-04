#include "holberton.h"
/**
 * _memcpy - copies memory
 * @dest: destination string
 * @src: source string
 * @n: unsigned integer
 *
 * Return: a pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	if (!src)
		return (src);

	for (i = 0 ; i < n ; i++)
	{
		if (&src[i] != &dest[i])
			dest[i] = src[i];

		else
			return (src);
	}
	return (dest);
}