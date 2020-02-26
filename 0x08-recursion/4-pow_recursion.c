#include "holberton.h"
/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: Base.
 * @y: Exponent.
 *
 * Return: X raised to Y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
