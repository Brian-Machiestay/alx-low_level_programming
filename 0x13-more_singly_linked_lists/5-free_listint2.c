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
	listint_t *myh = *head;
	listint_t *nestmyh = NULL;

	if (head != NULL)
	{
		myh = myh->next;
		free(*head);
	}
	while (myh != *head && myh != NULL)
	{
		nestmyh = myh->next;
		free(myh);
		myh = nestmyh;
	}
	*head = NULL;
}
