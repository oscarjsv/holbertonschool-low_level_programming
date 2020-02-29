#include "holberton.h"
/**
 * _strcat -copies the string pointed to by src.
 *@dest: is an array
 *@src:is a other array
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int i;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
		for (i = 0; src[i] != '\0'; i++)
		{
			dest[a] = src[i];
			a++;
		}
		return (dest);
}
