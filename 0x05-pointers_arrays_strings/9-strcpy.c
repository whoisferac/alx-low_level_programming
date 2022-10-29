#include "main.h"
/**
 * _strcpy - copies str
 * @src: pointer source
 * @dest: pointer dest
 * Return: char value
*/
char *_strcpy(char *dest, char *src)
{
int v;
for (v = 0; src[v] != '\0'; v++)
{
dest[v] = src[v];
}
dest[v] = '\0';
return (dest);
}
