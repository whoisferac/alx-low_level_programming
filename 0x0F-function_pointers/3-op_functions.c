#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *op_add - adds a and b
 *@a: number one
 *@b: number two
 *Return: sum
*/
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - difference of a and b
 * @a: number one
 * @b: number two
 * Return: difference
*/
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - product of a and b
 * @a: number one
 * @b: number two
 * Return: product
*/
int op_mul(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a * b);
}

/**
 * op_div - division of a and b
 * @a: number one
 * @b: number two
 * Return: divide
*/
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - modulus of a and b
 * @a: number one
 * @b: number two
 * Return: modulus
*/
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
