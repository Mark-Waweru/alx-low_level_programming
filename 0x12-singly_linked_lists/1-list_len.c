#include "lists.h"

/**
 * list_len - counts the number of elements in a linked list_t list
 * @h: A pointer pointing to the first element of the array
 *
 * Return: The total number of elements in a list
 */
size_t list_len(const list_t *h)
{
	size_t n_elem = 0;

	while (h)
	{
		n_elem++;
		h = h->next;
	}

	return (n_elem);
}
