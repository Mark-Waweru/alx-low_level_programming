#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _realloc - reallocates a memory locj using malloc and free
 * @ptr: Te pointer that holds the address of the memory location
 * @old_size: The old size allocated before
 * @new_size: The new size being allocated
 *
 * Return: The new pointer with the new size
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	unsigned int i;
	char * old_ptr = ptr;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	ptr1 = malloc(new_size);

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ptr1[i] = old_ptr[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptr1[i] = old_ptr[i];
	}

	free(ptr);
	return (ptr1);
}
