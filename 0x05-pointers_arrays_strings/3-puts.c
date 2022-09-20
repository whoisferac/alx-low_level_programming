#include "main.h"
/**
 * _puts - prints to standard output
 *@str: pointer variable
*/
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
