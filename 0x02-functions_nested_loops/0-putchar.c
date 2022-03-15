#include "main.h"

/**
* main - program that prints Alx.
*
* Return: int
*/

int main(void)
{
int n = 0;
char str_ax[3] = "Alx";

while (n < 3)
{
_putchar(str_ax[n]);
n += 1;
}
_putchar('\n');
return (0);
}
