#include "main.h"

/**
 * leet - encodes a string into 1337
 * @n: The string to be encoded
 *
 * Return: The encoded string
 */
char *leet(char *n)
{
	int i, j;
	char s[] = "aAeEoOtTlL";
	char c[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == s[j])
			{
				n[i] = c[j];
			}
		}
	}
	return (n);
}
