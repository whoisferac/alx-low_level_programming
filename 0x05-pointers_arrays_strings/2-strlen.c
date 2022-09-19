#include "main.h"
/**
 *_strlen - returns the length of a string
 *@s:pointer
 *Return: length
*/
int _strlen(char *s)
{
int length;
for (length = 0; *s != '\0'; s++)
{
length++;
}
return (length);
}
