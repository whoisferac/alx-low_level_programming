#include <stdio.h>
/**
 * main - prints the size of different variables
 * return - 0 ( if correct)
 * camel casing used 
 */
int main(void)
{
	char charType;
	int intType;
	long int longIntType;
	long long int longLongIntType;
	float floatType;

printf("size of a char: %lu byte(s)\n", sizeof(charType));
printf("size of an int: %lu byte(s)\n", sizeof(intType));
printf("size of a long int: %lu byte(s)\n", sizeof(longIntType));
printf("size of a long long int: %lu byte(s)\n", sizeof(longLongIntType));
printf("size of a float: %lu byte(s)\n", sizeof(floatType));
return (0);
}
