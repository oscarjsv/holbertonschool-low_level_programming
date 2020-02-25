#include "holberton.h"
/**
 * _strpbrk - print
 * @s: string to be scanned
 * @accept: string contained characters to match
 * Return: return s
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	for (; *s != '\0'; s++)
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (*s == accept[a])
			{
				return (s);
			}
		}
	}
	return (0);
}
