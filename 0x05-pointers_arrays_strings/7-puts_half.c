#include "main.h"
/**
 *puts_half - puts second half of string
 *@str: string
*/
void puts_half(char *str)
{
int a, length, b;
for (a = 0; str[a] != '\0'; a++)
{
}
length = a - 1;
for (b = (length / 2) + 1; b <= length; b++)
{
_putchar(str[b]);
}
_putchar('\n');
}
