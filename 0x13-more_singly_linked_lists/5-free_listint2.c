#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - check the code
 * @head: the list
 */
void free_listint2(listint_t **head)
{
	listint_t *myh;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		myh = *head;
		*head = (*head)->next;
		free(myh);
	}
}
