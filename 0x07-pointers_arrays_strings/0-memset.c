#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: The pointer to the memory location
 * @b: The character to fill
 * @n: The number of bytes
 *
 * Return: The pointer of the memory location now updated/manipulated
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *byte_ptr = s;
	unsigned int i;

	b = 'b';
	for (i = 0; i < n; i++)
	{
		byte_ptr[i] = b;
	}

	return (s);
}
