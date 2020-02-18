#include "holberton.h"

/**
 * _strlen - Print a square
 *@s:  Size of the square
 * Return: n
 */
int _strlen(char *s){

	int n;

	for (n = 0; *s != '\0'; s++){
		n++;
	}
	return(n);
}
