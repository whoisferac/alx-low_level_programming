#include "main.h"
/**
 * puts2 - printing every other char
 * @str: string
*/
void puts2(char *str)
{
int a, b;
for (a = 0; str[a] != '\0'; a++)
{
}
for (b = 0; b <= a - 1; b += 2)
{
_putchar(str[b]);
}
_putchar('\n');
}
