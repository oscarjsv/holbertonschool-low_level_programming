#include "holberton.h"
/**
 * factorial - Returns the factorial of a given number.
 * @n: Number to checks.
 *
 * Return: the factorial of a given number
 *         greater than 0, otherwise return 1.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
