#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds a new node to the beginning of a list
 * @head: is a pointer to the first node
 * @n: integer thats added to node
 * Return: pointer to new node else returns null
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
    return (NULL);
    }
    new->n = n;
    new->next = *head;
    *head = new;
    return (new);
}