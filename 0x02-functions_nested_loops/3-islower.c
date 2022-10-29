#include "main.h"
/**
 * _islower - checks for lowercase characters
 * @c: variable checkes
 * Description: character lowercase checker
 * Return: 1 if lowercase else 0
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
