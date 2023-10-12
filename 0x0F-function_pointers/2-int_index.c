#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: The array to be searched
 * @size: The size of the array
 * @cmp: The function pointer
 *
 * Return: index of an element or 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
