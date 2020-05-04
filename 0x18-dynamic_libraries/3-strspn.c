#include "holberton.h"
#include <stdlib.h>
/**
 * _strspn - function that locates a character in a string
 * @s: char string array
 * @accept: char array
 * Return: Number of bytes in the intial segment of `s`
 */

unsigned int _strspn(char *s, char *accept)
{
	int j;
	int i;

	j = 0;
	if (s == NULL || accept == NULL)
		return (0);

	for (; *s != 0; s++)
	{
		for (i = 0; *(accept + i) != 0; i++)
		{
			if (*s == accept[i])
			{
				j++;
				break;
			}
		}
		if (*(accept + i) == 0)
			break;
	}
	return (j);
}