#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: The destination of copy
 * @src: The source of the character to be copied
 * @n: The number of bytes to copy
 *
 * Return: pointer dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
