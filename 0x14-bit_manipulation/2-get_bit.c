#include "holberton.h"

/**
 * get_bit - give the value of a given bit
 * @n: bit
 * @index: given data
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	return ((n >> index) & 1);
}
