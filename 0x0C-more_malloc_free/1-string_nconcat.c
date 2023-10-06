#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: The string to append to
 * @s2: The string to be appended
 * @n: The number of characters to append
 *
 * Return: A concatenated string result
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0, s2_len = 0, i, j;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_len] != '\0')
	{
		s1_len++;
	}
	while (s2[s2_len] != '\0')
	{
		s2_len++;
	}

	if (n >= s2_len)
		n = s2_len;

	result = malloc(s1_len + n + 1);
	if (result == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
	{
		result[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		result[i + j] = s2[j];
	}

	result[i + n] = '\0';

	return (result);
}
