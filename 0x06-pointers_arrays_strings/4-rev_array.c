#include "main.h"

/**
 * reverse_array - reverses an array of ints
 * @a: pointer referencing the array
 * @n: the length array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int count = 0, eq;

	for (eq = n / 2; eq > 0; eq--, count++)
	{
		a[n - count - 1] += a[count];
		a[count] = a[n - count - 1] - a[count];
		a[n - count - 1] = a[n - count - 1] - a[count];
	}
}
