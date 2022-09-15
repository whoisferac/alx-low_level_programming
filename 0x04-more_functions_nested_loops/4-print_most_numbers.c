#include "main.h"
/**
 * print_most_numbers - prints 0 - 9 except 2 and 4
*/
void print_most_numbers(void)
{
int z;
for (z = '0'; z <= 9; z++)
{
if (z != '2' && z != '4')
{
_putchar(z);
}
}
_putchar('\n');
}
