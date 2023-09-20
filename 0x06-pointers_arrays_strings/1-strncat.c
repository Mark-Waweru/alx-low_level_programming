#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: The character to append to
 * @src: The character to be apppended
 * @n: The number of bytes to append
 *
 * Return: The pointer dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_end = dest;

	while (*dest_end != '\0')
	{
		dest_end++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest_end = *src;
		dest_end++;
		src++;
		n--;
	}
	*dest_end = '\0';

	return (dest);
}
