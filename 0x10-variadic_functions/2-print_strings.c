#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line
 * @separator:const type Character
 * @n: Unsigned type int
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *rec;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		rec = va_arg(ap, char*);
		if (rec == 0)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", rec);
		}
		if (i != (n-1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
