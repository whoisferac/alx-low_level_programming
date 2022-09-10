#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *description: a program to print the alphabets lc n uc
 *Return: 0 else return 1
 */
int main(void)
{
char alp1 = 'a';
char alp2 = 'A';
for (alp1 = 'a'; alp1 <= 'z'; alp1++)
{
putchar(alp1);
}
for (alp2 = 'A'; alp2 <= 'Z'; alp2++)
{
putchar(alp2);
}
putchar('\n');
return (0);
}
