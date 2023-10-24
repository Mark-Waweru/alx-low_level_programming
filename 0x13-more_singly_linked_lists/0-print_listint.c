#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: A pointer pointing to a struct
 *
 * Return: Number of elements in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t n_elem = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n_elem++;

		h = h->next;
	}

	return (n_elem);
}
