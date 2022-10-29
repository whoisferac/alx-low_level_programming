#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - prints all the element of a listint_t list
 * @h: pointer to the listint_h list to print
 *
 * Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t count = 0;
while(h)
{
printf("%d\n", h->n);
h = h->next;
count++;
}
return (count);
}
