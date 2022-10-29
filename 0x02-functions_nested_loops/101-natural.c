#include <stdio.h>
#include "main.h"

int main(void)
{
print_multiples(1024);
return (0);
}
/**
 * print_multiples - prints multiples of 3 and 5 
 * @1: variable
*/

void print_multiples(int i)
{
int i, sum = 0;
for (i = 3; i < 1; i++)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
	sum += i;
}
}
printf("%d", sum);
printf("\n");
}
