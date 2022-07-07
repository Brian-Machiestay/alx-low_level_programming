#include "lists.h"

/**
 * add_dnodeint_end - check the code
 * @head: the list
 * @n: the node to add
 * Return: the newNode
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *myh;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}

	else
	{
		myh = *head;
		while (myh->next != NULL)
		{
			myh = myh->next;
		}
	}
	myh->next = newNode;
	newNode->prev = myh;

	return (newNode);
}
