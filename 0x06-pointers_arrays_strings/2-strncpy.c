#include "main.h"
/**
 * *_strncpy - a function that copies a string
 * @*dest: pointer to destination
 * @*src: pointer to source
 * @n: the number input
 * Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int check;
for (check = 0; check < n && src[check] != '\0'; check++)
{
dest[check] = src[check];
}
for (; check < n; check++)
{
dest[check] = '\0';
}
return (dest);
}
