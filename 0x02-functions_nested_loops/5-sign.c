#include "holberton.h"
/**
 * print_sign - print sign
 * @n: An ascii int to compare
 * Return: where ever
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar (43);
		return (1);
	}
	if (n == 0)
	{
		_putchar (48);
		return (0);
	}
	if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	return (0);
}
