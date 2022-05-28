#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - check the code
 * @head: the list to reverse
 * Return: the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *myh = *head;
	listint_t *ptr = *head;

	if (head)
	{
		if ((*head)->next == NULL)
			return (*head);

		while ((*head)->next != NULL)
		{
			myh = (*head)->next;
			(*head)->next = myh->next;
			myh->next = ptr;
			ptr = myh;
		}
		*head = ptr;
		return (ptr);
	}
	return (NULL);
}
