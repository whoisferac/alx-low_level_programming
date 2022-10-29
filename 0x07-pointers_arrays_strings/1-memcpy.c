#include "main.h"
/**
 * _memcpy - copies n bytes from src to dest
 * @dest: destination
 * @src: source
 * @n: n bytes
 * Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int z;
for (z = 0; z < n; z++)
{
dest[z] = src[z];
}
return (dest);
}
