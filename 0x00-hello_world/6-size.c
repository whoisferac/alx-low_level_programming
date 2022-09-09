#include <stdio.h>

/**
 *main - prints the size of different
 *variable and different stages
 *such as char, int, long etc.
 i*
 * Return : 0 if executed properly else 1
 */

int main(void)
{
int intType;
    long int longIntType;
    long long int longLongIntType;
    char charType;
    float floatType;

    // sizeof evaluates the size of a variable
    printf("Size of char: %zu byte(s)\n", sizeof(charType));
    printf("Size of int: %zu byte(s)\n", sizeof(intType));
    printf("Size of long int: %zu byte(s)\n", sizeof(longIntType));
    printf("Size of long long int: %zu byte(s)\n", sizeof(longLongIntType));
    printf("Size of float: %zu byte(s)\n", sizeof(floatType));
return (0);
}
