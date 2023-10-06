#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using
 * @b: The number of  bytes to allocate
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *d;

	d = malloc(b);
	if (d == NULL)
		exit(98);

	return (d);
}
