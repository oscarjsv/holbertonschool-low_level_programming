#include "holberton.h"
/**
 * puts2 - Print a square
 *@str :  Size of the square
 *
 */
void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
		_putchar (str[a]);
			}
	_putchar('\n');
}
