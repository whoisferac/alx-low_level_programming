#include "main.h"
/**
 *print_sign - prints characters positive or negetive or null
 *Description: prints characters with _putchar
 *@n: variable store
 *Return: 1 if positive 0 if null and -1 if negetive
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
