#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - delete the head node and return it's data
 * @head: the list
 * Return: the data to return
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	i = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (i);
}
