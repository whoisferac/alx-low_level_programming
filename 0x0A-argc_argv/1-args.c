#include <stdio.h>
#include "main.h"
/**
 *main - prints number of args passed
 *@argc: argument counter
 *@argv: argument vector
 *Return: 0
*/
int main(int argc, char **argv __attribute__((unused)))
{
printf("%d", argc - 1);
putchar('\n');
return (0);
}
