#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: using putchar to print numbers
 * Return: 0 else 1
*/
int main(void)
{
int num;
for (num = 0; num < 10; num++)
{
putchar((num % 10) + '0');
}
putchar('\n');
return (0);
}
