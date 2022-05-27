#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * atone - check the code
 * @head: the list
 * @n: the integer to a node
 * @myh: the current node
 * Return: Always 0.
 */
listint_t *atone(listint_t **head, listint_t *myh, int n)
{
	listint_t *newNode;
	listint_t *temp;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	temp = myh->next;
	myh->next = newNode;
	newNode->next = temp;
	return (*head);
}
/**
 * add_nodeint - check the code
 * @head: the list
 * @n: the string node to insert
 * Return: the list.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}

/**
 * insert_nodeint_at_index - check the code
 * @head: the list
 * @idx: the index to insert at
 * @n: the node value
 * Return: the list.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *myh = *head;

	if (myh != NULL)
	{
		if (count == idx)
		{
			return (add_nodeint(head, n));
		}
	}
	while (myh != NULL)
	{
		if (count + 1 == idx)
			return (atone(head, myh, n));
		count++;
		myh = myh->next;
	}
	return (NULL);
}
