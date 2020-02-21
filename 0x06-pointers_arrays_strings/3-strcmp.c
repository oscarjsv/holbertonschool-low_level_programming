#include "holberton.h"
/**
 * _strcmp - compare two strings
 * @s1: string 1
 * @s2: string 2
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	char *ptr1 = s1;
	char *ptr2 = s2;

	while ((*ptr1 != '\0') && (*ptr2 != '\0') && (*ptr1 == *ptr2))
	{
		ptr1++;
		ptr2++;
	}
	return (*ptr1 - *ptr2);
}
