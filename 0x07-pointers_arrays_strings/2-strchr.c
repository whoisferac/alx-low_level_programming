#include "main.h"
/**
 * _strchr - locates c in a string
 *@s: pointer
 *@c: located char
 *Return: n else NULL
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (*s == c)
{
return (s);
}

return (0);
}
