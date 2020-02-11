#include "holberton.h"

/**
 * main - prints Holberton
 *
 * Return: Always 0.
 */
int main(void)
{
char holberton[] = "Holberton";
int a = 0;
for (holberton[a] = holberton[a]; holberton[a]; a++)
{
_putchar(holberton[a]);
}
_putchar('\n');
return (0);
}
