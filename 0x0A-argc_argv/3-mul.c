#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies 2 argc's
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
*/

int main(int argc, char **argv __attribute__((unused)))
{
int mult;
if (argc == 3)
{
mult = atoi(argv[1]) * atoi(argv[2]);
printf("%d", mult);
putchar('\n');
}
else
{
puts("Error");
putchar('\n');
return (1);
}
return (0);
}
