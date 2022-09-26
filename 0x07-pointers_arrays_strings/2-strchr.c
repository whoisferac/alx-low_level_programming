#include "main.h"
/**
 * _strchr - locates c in a string
 *@s: pointer
 *@c: located char
 *Return: n else NULL
*/
char *_strchr(char *s, char c)
{
char *n;
int v;
for (v = 0; v < s; v++)
{
if (s[v] == c)
{
n = s[v + 1];
}
return (n);
if (s[v] != c)
{
return (NULL);
}
}
}
