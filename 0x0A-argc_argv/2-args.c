#include "main.h"
#include <stdio.h>
/**
 *main - prints arguments to SO
 *@argc: argument counter
 *@argv: argument vector
 *Return: 0
*/
int main(int argc, char **argv)
{
int z;
for (z = 0; z < argc; z++)
{
printf("%s", argv[z]);
putchar('\n');
}
return (0);
}
