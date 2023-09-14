#include "main.h"

/**
 * _isdigit - checks for a digit 0-9
 * @c: The integer checked
 *
 * Return: 1 if it is a digit, 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
