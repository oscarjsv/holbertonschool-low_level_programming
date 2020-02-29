#include "holberton.h"
/**
 * _puts - prints a string followed by a new line.
 * @s: string to print.
 */
void _puts(char *s)
{
	int c;

	c = 0;

	while (s[c] != '\0')
	{
		_putchar(s[c]);
		c++;
	}
	_putchar('\n');
}
