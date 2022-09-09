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
	int a;
	char  b;
	long int 4;
	long long int 10;
	float  d;
printf("size of a char: %lu byte(s)\n", sizeof(b));
printf("size of an int: %lu byte(s)\n", sizeof(a));
printf("size of a long int: %lu byte(s)\n", sizeof(4));
printf("size of a long long int: %lu byte(s)\n", sizeof(10));
printf("size of a float: %lu byte(s)\n", sizeof(d));
return (0);
}
