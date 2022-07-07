#include "lists.h"

/**
 * get_dnodeint_at_index - check the code
 * @head: the list
 * @index: the index node to get
 * Return: the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *myh = head;

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
