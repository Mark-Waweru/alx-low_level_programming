#include "main.h"

/**
 * is_separator - checks for the character separator used in sentences
 * @c: The character to be chekced
 *
 * Return: one if found and zero if not
 */
int is_separator(char c)
{
	char separator[] = " \n\t,;':.!?(){}";
	int i;

	for (i = 0; separator[i]; i++)
	{
		if (c == separator[i])
			return (1);
	}

	return (0);
}

/**
 * cap_string - capitalizes characters after the separators
 * @n: The character string to be checked
 *
 * Return: A capitalized sentence through a pointer
 */
char *cap_string(char *n)
{
	int i;
	int capitalize = 1;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (is_separator(n[i]))
		{
			capitalize = 1;
		}
		else if (capitalize && (n[i] >= 'a' && n[i] <= 'z'))
		{
			n[i] = n[i] - 32;
			capitalize = 0;
		}
		else
		{
			capitalize = 0;
		}
	}

	return (n);
}
