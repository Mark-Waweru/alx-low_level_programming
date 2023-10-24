#include "lists.h"

/**
 * listint_len - counts the number of elements in a linked listint_t list
 * @h: A pointer to a struct data type
 *
 * Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t n_elem = 0;

	while (h)
	{
		n_elem += 1;
		h = h->next;
	}

	return (n_elem);
}
