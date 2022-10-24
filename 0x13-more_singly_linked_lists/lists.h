#ifndef LISTS_H_
#define LISTS_H_
#include <stddef.h>
#include <stdio.h>
typedef struct listint_s
{
int n;
struct listint_s *next;
} listint_t;
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
#endif
