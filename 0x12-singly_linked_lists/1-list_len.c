#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - check the code
 * @h: the list
 * Return: the number of lists
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *myh = h;

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
