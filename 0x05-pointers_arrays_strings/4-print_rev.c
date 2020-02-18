#include "holberton.h"
/**
 *print_rev - print in reverse
 *@s:string print
 *
 */
void print_rev(char *s)
{
	int b;

	for (b = 0; s[b] != '\0'; b++)
	{
	}
	b--;

	for (; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
