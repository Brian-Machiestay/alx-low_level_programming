#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - calculates sum of of n's and return
 * @head: the list to print
 * Return: sum of list integers.
 */
int sum_listint(listint_t *head)
{
	size_t sum = 0;
	listint_t *myh = head;

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
