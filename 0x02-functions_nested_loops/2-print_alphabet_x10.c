#include "holberton.h"
void print_alphabet_x10(void)
{
int i;
for (i = 0; i <= 9; i++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
