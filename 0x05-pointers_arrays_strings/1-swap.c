#include "holberton.h"
/**
 *swap_int - changes de number
 * @a: Size of the square
 * @b: variable
 */
void swap_int(int *a, int *b)
{
	int c;
	 c = *a;
	*a = *b;
	*b = c;
}
