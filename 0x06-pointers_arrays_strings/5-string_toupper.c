#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @n: The character to be changed
 *
 * Return: character n
 */
char *string_toupper(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - 32;/*Convert to uppercase*/
		}
		i++;
	}
	return (n);
}
