#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * struct dlistint - doubly linked list
 * @n: integer
 * @next: points to the next node
 * @prev: points to the previous node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct dlistint
{
	int n;
	struct dlistint *next;
	struct dlistint *prev;
} dlistint_t;
size_t print_dlistint(const dlistint_t *h);
#endif /* LISTS_H */
