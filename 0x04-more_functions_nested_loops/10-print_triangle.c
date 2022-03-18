#include "main.h"

/**
* print_triangle - fuction that prints a triangle of a determined size.
* @size: Size of a triangle.
*
* Return: Always 0.
*/

void print_triangle(int size)
{
int i;
int k;
int j;

if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= (size - i); j++)
{
_putchar(' ');
}
for (k = 1; k <= i; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
_putchar('\n');
}
