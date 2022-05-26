#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - check the code
 * @head: the address of the list
 * @str: the node string to add
 * Return: the list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *myh;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}

	else
	{
		myh = *head;
		while (myh->next != NULL)
		{
			myh = (myh)->next;
		}
	}
	myh->next = newNode;

	return (*head);
}
