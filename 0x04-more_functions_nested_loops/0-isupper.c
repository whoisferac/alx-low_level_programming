#include "main.h"
/**
 * _isupper - checks for uppercase characters
 * @n: variable
 * Return: 1 else 0
*/
int _isupper(int c)
{
if (c == 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}