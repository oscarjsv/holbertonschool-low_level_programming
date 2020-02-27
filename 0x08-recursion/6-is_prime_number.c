#include "holberton.h"

/**
 * PrimeChecker - Checks if the given number is prime or not.
 * @n: Iterator.
 * @i: Number given.
 *
 * Return: if the number is prime returns 1, otherwise 0.
 */
int prime_checker(int n, int i);

int is_prime_number(int n)
{
	return (prime_checker(n, 2));
}

int prime_checker ( int n, int i)
{
	if (n < 2)
		return (0);

	else if (i < n)
	{
		if (n % i == 0)
			return (0);

		return (prime_checker(n, i + 1));
	}
	return (1);
}
