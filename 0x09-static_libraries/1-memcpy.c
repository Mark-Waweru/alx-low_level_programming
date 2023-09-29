#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: The copy destination
 * @src: The source of copy
 * @n: The number of bytes to copy from memory
 *
 * Return: The destination pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_ptr = dest;
	char *src_ptr = src;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest_ptr[i] = src_ptr[i];
	}

	return (dest);
}
