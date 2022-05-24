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
	free(head);
	free(head->str);
	while (head->next != NULL && head != NULL)
	{
		free(head->next);
		free(head->str);
		head = head->next;
	}
	free(head);
	free(head->str);
}
