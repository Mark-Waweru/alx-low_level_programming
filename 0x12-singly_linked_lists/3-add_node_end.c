#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: A pointer pointer pointing to the first node
 * @str: A pointer ot a string
 *
 * Return: Address of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;
	list_t *count_l = *head;

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
		new->next = NULL;/*Because it will be the last node*/
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
	}

	return (new);
}
