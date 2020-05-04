#include "holberton.h"

/**
 * _strcmp - Function that compares two strings
 * @s1: char s1
 * @s2: char s2
 * Return: s1 -s2
 *
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != 0 && s2[i] != 0)
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			break;
		}
	}
	return (s1[i] - s2[i]);
}