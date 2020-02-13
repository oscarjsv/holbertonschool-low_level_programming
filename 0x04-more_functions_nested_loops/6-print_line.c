#include "holberton.h"
/**
 * print_line - check the code for Holberton School students.
 * @n: An ascii char to compare
 * Return: Always 0.
 */
void print_line(int n)
{
	char i;

	for (i = 1; i <= n; i++)
{
		_putchar('_');
}
		_putchar('\n');
}
