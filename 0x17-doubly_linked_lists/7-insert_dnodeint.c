#include "lists.h"

/**
 * insert_dnodeint_at_index - check the code
 * @h: the list
 * @idx: the index node to insert
 * @n: the value of the newnode to add
 * Return: the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *myh = *h;
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (myh != NULL)
	{
		if (count == idx)
		{
			return (add_dnodeint(h, n));
		}
		myh = myh->next;
	}
	while (myh != *h && myh != NULL)
	{
		count++;
		if (count == idx)
		{
			(myh->prev)->next = newNode;
			newNode->prev = myh->prev;
			newNode->next = myh;
			myh->prev = newNode;
			return (newNode);
		}
		myh = myh->next;
	}
	return (add_dnodeint_end(h, n));
}
