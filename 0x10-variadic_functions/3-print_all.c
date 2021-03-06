#include "variadic_functions.h"
/**
 * _switch - funtion for select case
 * @args: list of arguments of variatic funtion
 * @c: char to switch case
 * Return: Always void
 */

void _switch(va_list args, char c)
{
	char *p;

	switch (c)
	{
		case 'c':
			printf("%c", va_arg(args, int));
			break;

		case 'i':
			printf("%d", va_arg(args, int));
			break;

		case 'f':
			printf("%f", va_arg(args, double));
			break;

		case 's':
			p = va_arg(args, char *);
			if (p == NULL)
				p = "(nil)";
			printf("%s", p);
			break;

		default:
			break;
	}
}

/**
 * print_all - prts anything.
 * @format: const Pointer const
 * Return: void
 */

void print_all(const char * const format, ...)
{
	unsigned int i, j;
	va_list args;
	char *s = "cifs";
	char *space = "";

	va_start(args, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == s[j])
			{
				printf("%s", space);
				space = ", ";
				_switch(args, s[j]);
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	va_end(args);

}
