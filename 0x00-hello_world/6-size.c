#include <stdio.h>
/**
 * main - code that prints the size of data types
 * Description: it prints the sixe of data types
 * when the code is executed
 * Return: 0 if code passed else return 1
 */

int main(void)
{
int intType;
long int longIntType;
long long int longLongIntType;
char charType;
float floatType;
printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("Size of a long int: %zu byte(s)\n", sizeof(longIntType));
printf("Size of a long long int: %zu byte(s)\n", sizeof(longLongIntType));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
return (0);
}
