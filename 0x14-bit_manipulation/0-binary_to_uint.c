#include "main.h"
#include "stddef.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: A pointer to a string
 *
 * Return: The converted binary to int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, n = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);

		n <<= 1;
		if (b[i] == '1')
			n += 1;

	}
	return (n);
}
