#include "holberton.h"
/**
 * print_chessboard - print the chessboard
 * @a: pointer to an the chess board represented as an 8x8 array
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, b;

	for (i = 0 ; i < 8 ; i++)
	{
		for (b = 0 ; b < 8 ; b++)
			_putchar(a[i][b]);
		_putchar('\n');
	}
}
