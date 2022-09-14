#include "main.h"
/**
 * print_times_table - multiplication time table 0 -9
 * @n: integer limit
*/
void print_times_table(int n)
{
int a, b, c;
if (n < 15)
{
for (a = 0; a <= n; a++)
{
for (b = 0; b <= n; b++)
{
c = a * b;
if (b != 0)
{
_putchar(' ');
_putchar(' ');
}
_putchar(c + '0');
}
else if (c > 9 && c < 100)
{
_putchar(' ');
_putchar((c / 10) + '0');
_putchar((c % 10) + '0');
}
else
{
_putchar((c / 100) + '0');
_putchar(((c % 100) / 10) + '0');
_putchar(((c % 100) % 10) + '0');
}
if (b != n)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
