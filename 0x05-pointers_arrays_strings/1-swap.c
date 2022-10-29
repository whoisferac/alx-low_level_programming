#include "main.h"
/**
 *swap_int - swaps the values of two integers
 *Description: swaps two values
 *@a: variable
 *@b: variable
*/
void swap_int(int *a, int *b)
{
int z = *a;
*a = *b;
*b = z;
}
