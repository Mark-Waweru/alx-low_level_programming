#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: The character to append to
 * @src: The character to be appended
 *
 * Return: The pointer dest
 */
char *_strcat(char *dest, char *src)
{
	dest = strcat(dest, src);

	return (dest);
}
