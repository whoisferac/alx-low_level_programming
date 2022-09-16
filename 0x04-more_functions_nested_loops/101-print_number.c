#include "main.h"
/**
 *print_number - prints number
 *Description: primts number
 *@n: number to be printed
*/
void print_number(int n)
{
unsigned int z;
if (n < 0)
{
z = -n;
_putchar('-');
}
else
{
z = n;
}
if (z / 10)
{
print_number(z / 10);
}
_putchar((z % 10) + '0');
}
