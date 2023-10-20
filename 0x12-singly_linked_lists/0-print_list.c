#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: A pointer to the first node of the list
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n_nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;

		n_nodes++;
	}

	return (n_nodes);
}
