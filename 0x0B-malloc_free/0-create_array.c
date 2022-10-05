#include "main.h"
#include <stdlib.h>
/**
 * create_array - initializes array to char
 * @size: size of an array
 * @c: character
 * Return: address of array
*/
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int z;
if (size == 0)
{
return (NULL);
}
array = malloc(sizeof(char) * size);
if (array == NULL)
{
return (NULL);
}
for (z = 0; z < size; z++)
{
array[z] = c;
}
return (array);
free(array);
}
