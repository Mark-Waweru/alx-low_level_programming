#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - creates an array of integers
 * @min: The min values it can have
 * @max: The max values it can have
 *
 * Return: The pointer to the memory result location
 */
int *array_range(int min, int max)
{
	int *ptr;
	int no_of_elements, i;

	no_of_elements = (max - min) + 1;
	if (min > max)
		return (NULL);

	ptr = malloc(no_of_elements * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < no_of_elements; i++)
	{
		ptr[i] = min + i;
	}

	return (ptr);
}
