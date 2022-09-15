#include "main.h"
/**
 * print_line - prints lines in the terminal
 * @n: variable
*/
void print_line(int n)
{
int z;
if (n > 0)
{
for (z = 1; z <= n; z++)
{
_putchar('_');
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
