#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: The number to check bit in
 * @index: The point at which to check bit
 *
 * Return: value of bit or -1 if ther is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, verify;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	divisor = 1 << index;
	verify = n & divisor;
	if (verify == divisor)
		return (1);

	return (0);
}
