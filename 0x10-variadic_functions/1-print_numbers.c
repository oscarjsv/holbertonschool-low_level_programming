#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @rec: a pointer to a string.
 * @n: number of integers to be passed.
 *
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int rec, i;
	va_list ap;

	rec = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		rec = va_arg(ap, unsigned int);
		printf("%d", rec);

		if (i != (n-1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
