#include <stdio.h>
#include <math.h>
/**
 * main - prime factors
 * Description: prime factoring extraction
 * Return: 0
 */
int main(void)
{
long int c , b, max;
c = 612852475143;
max = -1;

while (c % 2 == 0)
{
max = 2;
c /= 2;
}
for (b = 3; b <= sqrt(c); b = b + 2)
{
while (c % b == 0)
{
max = b;
c = c / b;
}
}
if (c > 2)
max = c;
printf("%ld\n", max);
return (0);
}
