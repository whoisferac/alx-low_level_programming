#include "main.h"
/**
 *print_last_digit - prints last digit
 *@n: parameter
 *Return:p
*/
int print_last_digit(int n)
{
int p = n % 10;
if (p < 0)
{
p *= -1;
}
_putchar('0' + p);
return (p);
}
