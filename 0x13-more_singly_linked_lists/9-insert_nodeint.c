#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

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
	listint_t *temp = *head;
	listint_t *next = *head;
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	newNode->n = n;
	newNode->next = NULL;
	if (newNode == NULL)
		return (NULL);
	if (idx == 0 && *head == NULL)
		return (*head = newNode);
	else if (idx == 0 && *head != NULL)
	{
		newNode->next = *head;
		return (*head = newNode);
	}
	count++;
	while (next != NULL && next->next != *head)
	{
		if (count == idx)
		{
			temp = (next)->next;
			(next)->next = newNode;
			newNode->next = temp;
			return (newNode);
		}
		next = next->next;
		count++;
	}
	count++;
	if (idx == count)
	{
		next->next = newNode;
		return (newNode);
	}
	free(newNode);
	return (NULL);
}
