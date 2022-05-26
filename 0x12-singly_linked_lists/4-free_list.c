#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - check the code
 * @head: the list
 */
void free_list(list_t *head)
{
	list_t *myh = head;
	list_t *nestmyh = NULL;

	if (head != NULL && head->str != NULL)
	{
		nestmyh = head->next;
		free(head->str);
		free(head);
		myh = nestmyh;
	}
	else if (head != NULL)
	{
		myh = myh->next;
		free(head);
	}
	while (myh != head && myh != NULL)
	{
		if (myh->str != NULL)
		{
			free(myh->str);
		}
		nestmyh = myh->next;
		free(myh);
		myh = nestmyh;
	}
}
