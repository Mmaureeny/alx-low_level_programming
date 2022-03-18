#include "main.h"

/**
* print_triangle - fuction that prints a square, followed by a new line
* @size: size of a triangle
* Return: Always 0.
*/

void print_triangle(int size)
{
int row, col, aux;

if (size > 0)
{
for (row = 0; row < size; row++)
{
for (col = 0; < size; col++)
{
aux = (size - row) - 1;
if (col < aux)
_putchar(' ');
else
_putchar(35);
}
_putchar('\n');
}
}
else
_putchar('\n')
}
