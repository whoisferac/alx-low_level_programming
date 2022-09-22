#include "main.h"
/**
 * *_strcat - concatenates two strings
 * description: concatenates two strings
 * @*dest: pointer
 * @*src: pointer
 * Return: 0
*/
char *_strcat(char *dest, char *src)
{
int length, z;
length = 0;
while(dest[length] != '\0')
{
++length;
}
for(z = 0; src[z] != '\0'; ++z, ++length)
{
dest[length] = src[z];
}
dest[length] = '\0';
return(dest);
}
