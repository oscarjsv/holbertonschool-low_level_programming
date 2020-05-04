#include "holberton.h"

/**
 * _strcat - Function that concatenates two strings
 * @dest: string to the dest string
 * @src: string to the dest string
 * Return: char dest
 *
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0 ; src[j] != '\0' ; j++, ++i)
	{
		dest[i] = src[j];
	}
	return (dest);
}