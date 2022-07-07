#include "lists.h"
/**
 * add_dnodeint - check the code
 * @head: the list
 * @n: the value of the node to insert
 * Return: the number of elements.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	if (*head != NULL)
		(*head)->prev = newNode;
	newNode->prev = NULL;
	*head = newNode;
	return (*head);
}
