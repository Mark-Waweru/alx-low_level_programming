#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds new node at the beginning of a list_t list
 * @head: A pointer pointer pointing to the first node of the linked list
 * @str: A pointer string
 *
 * Return: Address of the new node/element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->str = strdup(str);
		new->len = len;
		new->next = *head;
		*head = new;
	}

	return (*head);
}
