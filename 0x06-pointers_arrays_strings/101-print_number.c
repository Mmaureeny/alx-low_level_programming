#include "main.h"
/**
* print_number - function that print number
* @n: number
* Return: Always 0.
*/

void print_number(int n)
{
unsigned int a, d, c;

if (n < 0)
{
_putchar(45);
a = n * -1;
}
else
{
a = n;
}

d = a;
c = 1;

while (d > 9)
{
d /= 10;
c *= 10;
}

for (; c >= 1; c /= 10)
{
_putchar(((a / c) % 10) + 48);
}
}
