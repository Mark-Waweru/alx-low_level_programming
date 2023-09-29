#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @c: The integer that is checked
 *
 * Return: -Positive if less than 0 and positive if greater than 0
 */
int _abs(int c)
{
	if (c < 0)
		return (-c);
	else
		return (c);
}
