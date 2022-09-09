#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point 
 * Prints random integers to var n each time executed
 *
 * Description: Program that assigns random number
 * to the variable n each time it's executed
 *
 * Return: 0 else return 1
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
