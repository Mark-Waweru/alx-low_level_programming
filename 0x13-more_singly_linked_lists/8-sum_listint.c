#include "lists.h"

/**
 * sum_listint - Gets the sum of all the data (n) of a listint_t linked list
 * @head: A pointer to the first node of the list
 *
 * Return: The sum of the integer data in every nodes in the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
