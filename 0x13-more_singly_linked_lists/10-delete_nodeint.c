#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - check the code
 * @head: the list
 * @index: the index node to delete
 * Return: one or neg one
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp;
	listint_t *myh = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(myh);
		return (1);
	}
	count++;
	temp = myh;
	myh = myh->next;
	while (myh != NULL)
	{
		if (count == index)
		{
			temp->next = myh->next;
			free(myh);
			return (1);
		}
		temp = myh;
		myh = myh->next;
		count++;
	}
	return (-1);
}
