#include "main.h"
/**
 * print_chessboard - prints chessboard
 * @a: array
 * Return: void
*/
void print_chessboard(char (*a)[8])
{
int z, y;
for (z = 0; z < 8; z++)
{
for (y = 0; y < 8; y++)
{
_putchar(a[z][y]);
}
_putchar('\n');
}
}
