#include "holberton.h"
/**
 * more_numbers - print more numbers
 *
 */

void more_numbers(void)
{
	char a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				_putchar(b / 10 + 48);
			}
			_putchar(b % 10 + 48);
		}
		_putchar('\n');
	}
}
