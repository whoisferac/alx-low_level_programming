#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * *get_op_func - function selector
 * @s: char operator
 * Return: pointer to the function that matches operator
*/
int (*get_op_func(char *s))(int, int)
{
int i = 0;
op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};
while (i < 10)
{
	if (s[0] == ops->op[i])
		break;
	i++;
}
return (ops[i / 2].f);
}
