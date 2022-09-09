#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - entry point
 *
 * Description: a program that performs so unique functions
 *
 * Return: return value is 0 if sucessful else 1
*/
int main(void)
{
int n;
int feracSpecialNumber;
srand(time(0));
n = rand() - RAND_MAX / 2;
feracSpecialNumber = n % 10;
if (feracSpecialNumber > 5)
{
printf("Last digit of %d is %d and is greater than 5\n"
,n,feracSpecialNumber);
}
if (feracSpecialNumber == 0)
{
printf("Last digit of %d is %d and is 0\n",n,feracSpecialNumber);
}
if (feracSpecialNumber < 6 && feracSpecialNumber != 0)
{
printf("Last digit of %d is %d and is less than 
6 and not 0\n",n,feracSpecialNumber);
}
return (0);
}
