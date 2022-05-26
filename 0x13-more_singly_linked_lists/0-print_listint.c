#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - check the code
 * @h: the list to print
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *myh = h;

	if (h != NULL)
	{
		printf("%d\n", myh->n);
		myh = myh->next;
		count++;
	}
	while (myh != h && myh != NULL)
	{
		printf("%d\n", myh->n);
		myh = myh->next;
		count++;
	}

	return (count);
}
