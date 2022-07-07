#include "lists.h"

/**
 * free_dlistint - check the code
 * @head: the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *myh = head;
	dlistint_t *nestmyh = NULL;

	if (head != NULL)
	{
		myh = myh->next;
		free(head);
	}
	while (myh != head && myh != NULL)
	{
		nestmyh = myh->next;
		free(myh);
		myh = nestmyh;
	}
}
