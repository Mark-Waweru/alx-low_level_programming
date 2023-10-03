#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - creates a newly allocated space in memory, which contains a copy
 * of the string given as a parameter
 * @str: The string parameter
 *
 * Return: string pointer, null
 */
char *_strdup(char *str)
{
	char *s;
	int i;

	s = malloc(sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		s[i] = str[i];
	}

	return (s);
}
