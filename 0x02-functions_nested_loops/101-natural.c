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
int n, sum = 0;
for (n = 3; n < 1; n++)
{
if ((n % 3 == 0) || (n% 5 == 0))
{
	sum += n;
}
}
printf("%d", sum);
printf("\n");
}
