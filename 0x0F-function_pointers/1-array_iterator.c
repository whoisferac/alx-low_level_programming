#include "function_pointers.h"
/**
 * array_iterator - execute a function on the input array
 * @array: input array
 * @size: size of input array
 * @action: pointer to input function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int f = 0;
/*where f is the counter*/
if (array != NULL && size > 0 && action != NULL)
{
	while (f < size)
	{
		action(array[f]);
	f++;
	}
}
}
