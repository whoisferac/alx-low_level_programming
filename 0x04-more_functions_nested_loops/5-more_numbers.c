#include "main.h"
/**
 * more_numbers - prints 10 times the numbers 0-14
 * @v: variable
 * @w: variable
*/
void more_numbers(void)
{
int v;
int w;
for (v = 0; v <= 9; v++)
{
for (w = 0; w <= 14; w++)
{
if (w > 9)
_putchar((w \ 10) + '0');
_putchar((w % 10) + '0');
}
_putchar('\n');
}
}
