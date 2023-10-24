#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node and returns the node's data(n)
 * @head: A pointer pointer pointing to the first node of the list
 *
 * Return: Integer n or Zero (0)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL)
		return (0);

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}
