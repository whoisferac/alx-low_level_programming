#include <stdio.h>
/**
 * main - prints 1 - 100 with iterations
 * Description: multiples of 3 5 and 15 are shown
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
if (x % 5 == 0)
{
printf("Buzz ");
}
else
if (x % 3 == 0)
{
printf("Fizz ");
}
else
{
printf("%d ", x);
}
}
printf("\n");
return (0);
}
