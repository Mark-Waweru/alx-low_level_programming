#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @n: The string encoded
 *
 * Return: The encoded string
 */
char *rot13(char *n)
{
	int i, j;
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char c[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (n[i] == s[j])
			{
				n[i] = c[j];
				break;
			}
		}
	}
	return (n);
}
