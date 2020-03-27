#include "holberton.h"

/**
 * set_bit - set the value of bit to 1
 * @n: bit
 * @index: number of bit to change
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n |= (1 << index);
	return (1);
}
