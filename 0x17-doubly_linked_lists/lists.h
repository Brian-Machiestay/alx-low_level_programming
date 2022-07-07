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
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
#endif /* LISTS_H */
