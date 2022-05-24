#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - check the code
 * @h: the list
 * Return: the number of lists
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *myh = h;

	if (h != NULL && h->str != NULL)
	{
		printf("[%u] %s\n", myh->len, myh->str);
		myh = myh->next;
		count++;
	}
	else if (h != NULL)
	{
		printf("[0] (nil)\n");
		count++;
		myh = myh->next;
	}
	while (myh != h && myh != NULL)
	{
		if (myh->str == NULL)
		{
			printf("[0] (nil)\n");
			count++;
			continue;
		}
		printf("[%u] %s\n", myh->len, myh->str);
		myh = myh->next;
		count++;
	}

	return (count);
}
