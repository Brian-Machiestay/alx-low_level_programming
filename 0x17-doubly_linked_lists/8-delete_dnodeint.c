#include "lists.h"

/**
 * delete_dnodeint_at_index - check the code
 * @head: the list
 * @index: the node to delete
 * Return: 1 if passed 0 failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp;
	dlistint_t *myh = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
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
			if (myh->next != NULL)
				(myh->next)->prev = temp;
			free(myh);
			return (1);
		}
		temp = myh;
		myh = myh->next;
		count++;
	}
	return (-1);
}
