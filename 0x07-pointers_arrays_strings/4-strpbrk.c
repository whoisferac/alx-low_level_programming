#include "main.h"
/**
 *_strpbrk - searches a string for any set of bytes
 *@s: string to be iterated
 *@accept: set of chars
 *Return: null
*/
char *_strpbrk(char *s, char *accept)
{
int q;
while (*s != '\0')
{
for (q = 0; accept[q]; q++)
{
if (*s == accept[q])
{
return (s);
}
}
s++;
}
return ('\0');
}
