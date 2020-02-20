#include "holberton.h"
/**
 * _strncat -copies the string pointed to by src.
 *@dest: is an array
 *@src:is a other array
 *@n: number
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int i;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (i = 0; i < n; i++, a++)
	{
		if (src[i] != '\0')
		{
			dest[a] = src[i];
		}
		else
		{
			break;
		}
	}
	return (dest);
}
