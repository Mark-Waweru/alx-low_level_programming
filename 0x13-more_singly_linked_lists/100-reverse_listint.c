#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: A pointer pointer pointing to the first node
 *
 * Return: A pointer of type listint_t
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;
	listint_t *prev = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
