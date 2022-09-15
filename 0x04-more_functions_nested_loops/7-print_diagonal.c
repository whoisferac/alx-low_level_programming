#include "main.h"
/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: variable
*/
void print_diagonal(int n)
{
int y, z;
if (n > 0)
{
for (y > 1; y <= n; y++)
{
for (z = 1; z < y; z++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
