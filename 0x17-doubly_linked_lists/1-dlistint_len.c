#include "lists.h"

/**
 * dlistint_len - check the code
 * @h: the list
 * Return: the size of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *myh = h;

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
