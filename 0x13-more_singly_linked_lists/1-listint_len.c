#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - check the code
 * @h: the list
 * Return: the number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *myh = h;

	if (h != NULL)
	{
		count++;
		myh = myh->next;
	}
	while (myh != h && myh != NULL)
	{
		myh = myh->next;
		count++;
	}

	return (count);
}
