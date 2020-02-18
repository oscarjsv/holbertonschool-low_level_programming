#include<stdio.h>
#include "holberton.h"
/**
 *rev_string - print in reverse
 *@s:string print
 *
 */
void rev_string(char *s)
{
	int  j, c;

	for (c = 0; *s != '\0'; s++)
	{
		c++;
	}
	for (j = c ; j >= 0; j--)
		{
			putchar(s[j]);
		}

}
