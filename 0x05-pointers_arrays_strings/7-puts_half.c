#include "holberton.h"
/**
 * puts_half - Print a square
 *@str :  Size of the square
 *
 */
void puts_half(char *str)
{
	int a;
	int n;

	for (a = 0; str[a] != '\0'; a++)
	{
	}
	a++;
	if (a % 2 != 0)
	{
		n = (a - 1) / 2;
	}
	else
	{
		n = a / 2;
	}

	for (; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
