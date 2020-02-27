#include "holberton.h"
/**
 * _sqrt_recursion - prints natural square of a number
 * @n: given number
 * Return: function count
 */
int count(int n, int x);
int _sqrt_recursion(int n)
{

	if (n < 1)
	{
		return (-1);
	}
	return (count(n, 1));
}

/**
 * count - count number x*x
 * @n: int
 * @x: int
 * Return: recursion
 */

int count(int n, int x)
{
	if (x * x > n)
	{
		return (-1);
	}
	else if (x * x == n)
	{
		return (x);
	}
	else
	{
		return (count(n, x + 1));
	}
}
