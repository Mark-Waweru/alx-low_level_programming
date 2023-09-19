#include "main.h"
#include <string.h>

/**
 * rev_string - prints the characters of the string array s in reverse
 * @s: the string array pointer to be passed
 *
 * Return: void
 */
void rev_string(char *s)
{
	char rev = s[0];
	int i;
	int counter = 0;

	while (s[counter] != '\0')
		counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
