#include <stdio.h>
#include <stdin.h>
#include <stdlib.h>
/**
 * main - entry point
 * description: a program that prints the alphabet excluding e and q
 * Return: 0 else 1
*/
int main(void)
{
char alp = 'a';
char notPrint = 'e' 'q';
for(alp = 'a'; alp <= 'z'; alp++)
{
if (alp != 'e' && alp != 'q')
{
putchar(alp);
}
}
putchar('\n');
return (0);
}
