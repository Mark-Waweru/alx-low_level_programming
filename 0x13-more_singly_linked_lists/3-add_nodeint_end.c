#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: A pointer pointer pointing to the first  node of the list
 * @n: The integer member of struct
 *
 * Return: NULL or address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *count_l = *head;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (count_l->next != NULL)
		{
			count_l = count_l->next;
		}
		count_l->next = new;
	}

	return (new);
}
