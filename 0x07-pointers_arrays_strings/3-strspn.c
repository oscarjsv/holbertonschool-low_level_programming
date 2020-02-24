#include "holberton.h"
/**
 * _strspn - get the lenght of a string
 * @s: the string to be scanned
 * @accept: characters to match
 * Return: the number of characters
 */

unsigned int _strspn(char *s, char *accept)
{
	int length = 0, a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				length++;
				break;
			}
		}
		if (s[a] != accept[b])
			break;
	}
	return (length);
}
