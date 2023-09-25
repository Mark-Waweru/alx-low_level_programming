#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: The string to check
 * @accept: The characters to check
 *
 * Return: lenght of the prefix
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				length += 1;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (length);
			}

		}
	}

	return (length);
}
