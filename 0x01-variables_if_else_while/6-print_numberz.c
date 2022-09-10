#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * description: using putchar to print numbers
 * return: 0 else 1
*/
int main(void)
{
int num;
for (num = 0; num < 9; num++)
{
putchar((num % 10) + '0');
}
putchar('\n');
return (0);
}	
