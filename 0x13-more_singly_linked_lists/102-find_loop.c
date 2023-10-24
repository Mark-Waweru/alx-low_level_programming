#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head:  pointer pointing to the first node
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *shorter = head;
	listint_t *tall = head;

	if (head == NULL)
	return (NULL);

	while (shorter && tall && tall->next)
	{
		tall = tall->next->next;
		shorter = shorter->next;
		if (tall == shorter)
		{
			shorter = head;
			while (shorter != tall)
			{
				shorter = shorter->next;
				tall = tall->next;
			}
			return (tall);
		}
	}

	return (NULL);
}
