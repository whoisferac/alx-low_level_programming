#include <stdio.h>
#include <stdlib.h>
/**
 * main - print 1 - 100 in a partern
 * Description: printed pattern 3 5 and 15
 * Return: 0
*/
int main(void)
{
int x;
for (x = 1; x <= 100; x++)
{
if (x % 15 == 0)
{
printf("FizzBuzz ");
}
else
if (x % 3 == 0)
{
printf("Fizz ");
}
else
if (x % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", x);
}
}
printf("\n");
return (0);
}
