#include "holberton.h"
/**
 * _islower - printf is lower
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
int v;
for (v = 'a'; v <= 'z'; v++)
{
if (v == c)
return (1);
}
return (0);
}
