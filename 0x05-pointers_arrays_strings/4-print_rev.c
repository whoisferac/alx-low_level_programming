#include "main.h"
/**
 * print_rev - prints in reverse
 * @s: pointer
*/
void print_rev(char *s)
{
int z, v = 0;
for (; s[v] != '\0'; v++)
{
}
for (z = v - 1; z >= 0; z--)
{
_putchar(s[z]);
}
_putchar('\n');
}
