#include "main.h"
#include <string.h>

/**
 * *_strcpy - copies the string src to dest
 * @dest: The string to put the copy
 * @src: The strig to copy
 *
 * Return: dest the copied string
 */
char *_strcpy(char *dest, char *src)
{
	dest = strcpy(dest, src);

	return (dest);
}
