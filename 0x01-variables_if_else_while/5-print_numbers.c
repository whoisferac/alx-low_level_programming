#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: a program in c to print numbers 0 to 9
 * Return: 0 else 1
*/
int main(void)
{
int num = 0;
int ten = 10;
while (num < ten)
{
printf("%d", num);
num++;
}
printf("\n");
return (0);
}
