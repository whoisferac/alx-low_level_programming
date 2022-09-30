#include "main.h"
/**
 * factorial - returns factoral of a number
 * @n: variable
 * Return: factorial(n) else -1
*/
int factorial(int n)
{
int fact;
if (n < 0)
{
return (-1);
}
else
if (n == 0)
{
return (1);
}
else
{
fact = n * factorial(n - 1);
}
return (fact);
}
