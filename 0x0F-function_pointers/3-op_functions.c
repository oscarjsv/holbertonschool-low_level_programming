#include "3-calc.h"
/**
 * op_add - addition operator
 * @a: first int
 * @b: second int
 * Return: sum of 2 numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - sub operator
 * @a: first int
 * @b: second int
 * Return: sum of 2 numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - mul operator
 * @a: first int
 * @b: second int
 * Return: sum of 2 numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - addition operator
 * @a: first int
 * @b: second int
 * Return: sum of 2 numbers
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - addition operator
 * @a: first int
 * @b: second int
 * Return: sum of 2 numbers
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
