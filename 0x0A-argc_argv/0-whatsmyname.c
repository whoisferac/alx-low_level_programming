#include "main.h"
#include <stdio.h>
/**
 * main - prints the name of the file
 * @argc: argument counter
 * @argv: array of argument
 * Return: 0
*/
int main(int argc, char **argv)
{
printf("%s", argv[argc - 1]);
putchar('\n');
return (0);
}
