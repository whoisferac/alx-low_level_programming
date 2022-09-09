#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* main - entry point
 *
 * Description: a program that performs so unique functions
 *
 * Return: return value is 0 if sucessful else 1
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int randomNumber = rand () % 10;
if (randomNumber > 5)
{	
printf("Last digit of %n is %d and is greater than 5\n", n , randomNumber);
}
if (randomNumber == 0)
{	
printf("Last digit of %n is %d and is 0\n", n , randomNumber);
}
if (randomNumber < 6 && randomNumber != 0)
{
printf("Last digit of %n is %d and is less than 6 and not zero\n", n , randomNumber);
}
return (0);
}
