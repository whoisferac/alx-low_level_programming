#include "main.h"
#include <ctype.h>
/**
 *_isalpha - checks if c is a letter l\u case
 *@c: variable checks
 *Return: return 1 else 0
 *
*/
int _isalpha(int c)
{
if (isalpha(c))
{
return (1);
}
else
{
return (0);
}
}
