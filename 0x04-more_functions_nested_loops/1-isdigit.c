#include "holberton.h"
/**
 * _isdigit - printf is lower
 * @c: An ascii char to compare
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	else
	{
		return (0);
	}


}
