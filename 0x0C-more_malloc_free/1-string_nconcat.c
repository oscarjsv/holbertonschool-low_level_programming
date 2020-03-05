#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

int _strlen(char *s);

/**
 *string_nconcat - concatenate 2 strings
 *@s1: string 1
 *@s2: string 2
 *@n: unsigned int
 *Return: reurn concatenated strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int size_s1, size_s2;
	unsigned int k, counter;
	char *C;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	size_s1 = _strlen(s1);
	size_s2 = _strlen(s2);
	if (n >= size_s2)
	{
		C = malloc(size_s1 + size_s2 + 1);
	}
	else
	{
		C = malloc(size_s1 + n + 1);
	}

	if (C == NULL)
	{
		return (NULL);
	}

	for (k = 0, counter = 0; k < size_s1; k++, counter++)
	{
		C[k] = s1[counter];
	}

	if (n >= size_s2)
	{
		for (counter = 0; counter < size_s2; counter++, k++)
		{
			C[k] = s2[counter];
		}
	}
	else
	{
		for (counter = 0; counter < n; counter++, k++)
		{
			C[k] = s2[counter];
		}
	}
	C[k] = '\0';

	return (C);
}


/**
 *_strlen - legnth of a string
 *@s: string to be evaluated
 *Return: return the legnth without taking into account the nul
 */

int _strlen(char *s)
{

	int count;

	count = 0;
	while (*s != '\0')
	{
		s++;/* moving the pointer one index*/
		count++;
	}
	return (count);
}
