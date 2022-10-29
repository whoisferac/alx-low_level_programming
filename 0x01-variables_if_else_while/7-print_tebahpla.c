#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *Description: printing chars backwards
 *Return: 0 else 1
*/
int main(void)
{
char pla;
for (pla = 'z'; pla  >= 'a'; pla--)
{
putchar(pla);
}
putchar('\n');
return (0);
}
