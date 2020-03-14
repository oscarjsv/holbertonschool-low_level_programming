#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that summ parameters
 * @n: number of arguments
 * Return: 0 if fail, sum if succeed
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
