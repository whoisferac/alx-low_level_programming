#include "main.h"
/**
 * *_strncat - concatenates bytes of 2 strings
 *@dest: pointer to destination
 *@src: pointer to sum
 *@n: number of bytes
 *Return: void
*/
char *_strncat(char *dest, char *src, int n)
{
int numI, z;
for (numI = 0; dest[numI] != '\0'; numI++);
for (z = 0; z < n && src[z] != '\0'; z++)
dest[numI + z] = src[z];
dest[numI + z] = '\0';
return (dest);
}
