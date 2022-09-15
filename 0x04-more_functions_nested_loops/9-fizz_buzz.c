#include <stdio.h>
/**
 * main - prints 1 - 100 with iterations
 * Description: fizz multiple of 3 buzz multiple of 5 and fizzbuzz multiple * of 15
 * Return: 0
*/
int main()
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
return (0);
}
