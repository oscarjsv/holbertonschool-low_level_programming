#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int c;
int a;
for (c = 48; c <= 57; c++)
{
for (a = 48; a <= 57; a++)
{
putchar(c);
putchar(a);
if (c ==57 && a== 57)
break;
putchar(',');
putchar(' ');
}
}
return (0);
}
