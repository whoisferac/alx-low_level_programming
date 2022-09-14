#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * Description: prints alphabet
 * Return: empty
*/
void print_alphabet_x10(void)
{
int q;
int w;

for (q = 1; q <= 10; q++)
{
for (w = 'a'; w <= 'z'; w++)
_putchar(w);
_putchar('\n');
}
}	
