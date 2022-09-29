#include "main.h"
/**
 *_puts_recursion - prints string using recursion
 *@s: string of chars
*/
void _puts_recursion(char *s)
{
int z = 0;
if (*s != '\0')
{
_putchar(s[z]);
_puts_recursion(s + 1);
}
else
{
_putchar('\n');
}
}
