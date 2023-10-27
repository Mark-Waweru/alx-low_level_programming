#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: The number to set
 * @index: The position to change
 *
 * Return: 1 if success, -1 if error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
