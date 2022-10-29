#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: string cointaining name
 * @f: pointer to a char
 * Return: void
*/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
}
