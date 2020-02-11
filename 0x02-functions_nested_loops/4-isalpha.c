#include "holberton.h"
/**
 * _isalpha - printf file an letter
 * @c: An ascii char to compare
 * Return: return numb 1 numb depending of the condition
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
return (0);
}
