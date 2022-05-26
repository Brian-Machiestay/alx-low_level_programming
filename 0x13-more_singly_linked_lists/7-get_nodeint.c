#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - check the code
 * @head: the list
 * @index: the node to return
 * Return: the node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *myh = head;

	if (myh != NULL)
	{
		if (count == index)
		{
			return (myh);
		}
		myh = myh->next;
	}
	while (myh != head && myh != NULL)
	{
		count++;
		if (count == index)
		{
			return (myh);
		}
		myh = myh->next;
	}
	return (NULL);
}
