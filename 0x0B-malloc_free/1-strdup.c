#include "main.h"
#include <stdlib.h>
/**
 * _strdup - pointer to string duplicate
 * @str: pointer to string to be duplicated
 * Return: pointer to duplicate
*/
char *_strdup(char *str)
{
char *arcol;
unsigned int count, z;
/*length of string str found*/
if (str == NULL)
{
return (NULL);
}
count = 0;
while (str[count])
{
count++;
}
/*mem alloc done*/
arcol = malloc(sizeof(char) * count);
if (arcol == NULL)
{
return (NULL);
}
/*loop to cp string*/
for (z = 0; z < count; z++)
{
arcol[z] = str[z];
}
return (arcol);
free(arcol);
}
