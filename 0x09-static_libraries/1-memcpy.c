#include "holberton.h"

/**
 * _memcpy - Copies memory area
 * @dest: Destination memory
 * @src: Memory for source
 * @n: Number of bytes to copy
 * Return: Destination memory
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
