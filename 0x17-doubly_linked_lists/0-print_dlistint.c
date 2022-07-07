#include "lists.h"

/**
 * print_dlistint - check the code
 * @h: the list
 * Return: the number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *myh = h;

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
