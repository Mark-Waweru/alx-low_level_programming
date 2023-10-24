#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * linked list.
 * @head: A pointer pointer to the first node.
 * @index: The element number in the list
 *
 * Return: -1 when unsuccesful and 1 while successful
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int n;
	listint_t *temp = *head;
	listint_t *current = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (n = 0; n < index - 1; n++)
	{
		if (!temp || !temp->next)
			return (-1);

		temp = temp->next;
	}

	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
