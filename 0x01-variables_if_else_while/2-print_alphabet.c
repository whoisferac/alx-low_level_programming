#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *Description: a program that prints the alphabets without using printf
 *Return: return value is 0 else 1
 */
int main(void)
{
char theAlpts = 'a';
for (theAlpts = 'a'; theAlpts <= 'z'; theAlpts++)
{
putchar(theAlpts);
}
putchar('\n');
return (0);
}
