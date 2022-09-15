#include <stdio.h>
#include <math.h>
/**
 * main - prime factors
 * Description: prime factoring extraction
 * Return: 0
 */
void prime(long int z)
{
int c = 2;
while (z > 1)
{
if (z % c == 0)
{
printf("%d ", c);
z /= c;
}
else
c++;
}
}
long int factor(void)
{
long int z = 612852475143;
prime(z);
return (z);
}
