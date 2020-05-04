#include "holberton.h"

/**
 * _strncat - Function that concatenates two strings
 * @dest: src string to the dest string,
 * @src: src string to the dest string,
 * @n: src string to the dest string,
 *
 * Return: char dest
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0 ; j < n && src[j] != 0 ; j++, ++i)
		dest[i] = src[j];

	return (dest);
}