#include "main.h"

/**
* print_square - fuction that prints a square, followed by a new line
* @size: size of square
* Return: Always 0.
*/

void print_square(int size)
{
int col, row;

if (size > 0)
{
for (col = 0; row < size; row++)
{
for (col = 0; col < size; col++)
{
_putchar(35);
}
_putchar('\n');
}
}
else
_putchar('\n');
}
