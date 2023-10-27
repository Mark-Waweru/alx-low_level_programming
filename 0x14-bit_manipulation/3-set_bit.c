#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: The number to set
 * @index: The position at which to set bit
 *
 * Return: 1 if success, -1 if an error occures
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int settingbit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	settingbit = 1 << index;
	*n = *n | settingbit;

	return (1);
}
