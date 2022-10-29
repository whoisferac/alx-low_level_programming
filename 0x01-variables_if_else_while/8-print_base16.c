#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: printing hexa-decimal numbers
 * Return: 0 else 1
*/
int main(void)
{
char lets;
char nums;
for (nums = 0; nums < 10; nums++)
{
putchar((nums % 10) + '0');
}
for (lets = 'a'; lets <= 'f'; lets++)
{
putchar(lets);
}
putchar('\n');
return (0);
}
