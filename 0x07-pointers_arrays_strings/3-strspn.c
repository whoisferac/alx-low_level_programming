#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: string containing required bytes
 * Return: number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
int z, y;
unsigned int len;
len = 0;
for (z = 0; s[z] != '\0'; z++)
{
for (y = 0; accept[y] != '\0' && accept[y] != s[z]; y++)
;
if (s[z] == accept[y])
{
len++;
}
if (accept[y] == '\0')
{
return (len);
}
}
return (len);
}
