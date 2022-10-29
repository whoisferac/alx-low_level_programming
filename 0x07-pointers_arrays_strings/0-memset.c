#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to a char
 * @b: variable char
 * @n: unsigned integer
 * Return: S else 1
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
