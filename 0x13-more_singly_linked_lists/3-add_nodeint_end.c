#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - check the code
 * @head: the list
 * @n: the integer to a node
 * Return: the new list.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *myh;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

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
			myh = (myh)->next;
		}
	}
	myh->next = newNode;

	return (*head);
}
