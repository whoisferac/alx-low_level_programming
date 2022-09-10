#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * description: printing hexa-decimal numbers
 * return: 0 else 1
*/
int main(void)
{
char lets;
char nums;
for (nums = 0; nums <= 9; nums++)
{
putchar(nums);
}
for (lets = 'a'; lets <= 'f'; lets++)
{
putchar(lets);
}
putchar('\n');
return (0);	
}
