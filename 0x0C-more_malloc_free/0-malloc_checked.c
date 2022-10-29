#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - allocates memory using malloc
 * @ptr: holds address of space created
 * Return: address stored in ptr
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;
	ptr = malloc(b);
	if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
