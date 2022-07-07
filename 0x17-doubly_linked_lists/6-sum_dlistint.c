#include "lists.h"

/**
 * sum_dlistint - check the code
 * @head: the list
 * Return: the sum of all elements
 */
int sum_dlistint(dlistint_t *head)
{
	size_t sum = 0;
	dlistint_t *myh = head;

	if (head != NULL)
	{
		sum += myh->n;
		myh = myh->next;
	}
	while (myh != head && myh != NULL)
	{
		sum += myh->n;
		myh = myh->next;
	}

	return (sum);
}
