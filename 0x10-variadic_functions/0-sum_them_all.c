#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - It sum every parameter given.
 * @n: Last parameter before ellipsis in the function.
 *
 * Return: It returns the sum of every parameter give it to function.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, i;
	va_list ap;

	sum = 0;

	va_start(ap, n);
		if (n == 0)
		{
			return (0);
		}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, unsigned int);
	}
	va_end(ap);
	return (sum);
}
