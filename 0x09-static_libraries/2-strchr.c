#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: The string to check
 * @c: The character to check
 *
 * Return: The string now modified
 */
char *_strchr(char *s, char c)
{
	char *s_ptr = s;
	int i;

	for (i = 0; s_ptr[i] >= '\0'; i++)
	{
		if (s_ptr[i] == c)
			return (s_ptr + i);
	}

	return (NULL);
}
