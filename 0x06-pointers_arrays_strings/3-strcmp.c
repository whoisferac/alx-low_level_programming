#include "main.h"
/**
 * _strcmp - compares 2 strings arithmetically
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return: s1 - s2 if false else 0
*/
int _strcmp(char *s1, char *s2)
{
int check;
for (check = 0; s1[check] != '\0' || s2[check] != '\0'; check++)
{
if (s1[check] != s2[check])
{
return (s1[check] - s2[check]);
}
}
return (0);
}
