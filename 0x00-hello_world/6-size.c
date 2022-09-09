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
printf("size of a char: %d byte(s)\n", sizeof(char));
printf("size of an int: %d byte(s)\n", sizeof(int));
printf("size of a long int: %d byte(s)\n", sizeof(long int));
printf("size of a long long int: %d byte(s)\n", sizeof(long long int));
printf("size of a float: %d byte(s)\n", sizeof(float));
return (0);
}
