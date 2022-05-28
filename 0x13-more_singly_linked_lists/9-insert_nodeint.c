#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * new_Node - returns a new node
 * @n: the integer data
 * Return: a new node
 */
listint_t *new_Node(int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	return (newNode);
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
	listint_t *previous = *head;
	listint_t *newNode;

	newNode = new_Node(n);
	if (newNode == NULL)
		return (NULL);
	if (myh != NULL)
	{
		if (count == idx)
		{
			(add_nodeint(head, n));
			return (newNode);
		}
		previous = myh;
		myh = myh->next;
		count++;
	}
	while (myh != NULL && myh != *head)
	{
		if (count == idx)
		{
			previous->next = newNode;
			newNode->next = myh;
			return (newNode);
		}
		previous = myh;
		count++;
		myh = myh->next;
	}
	if (count == idx)
	{
		previous->next = newNode;
		return (newNode);
	}
	else
	{
		free(newNode);
		return (NULL);
	}
}
