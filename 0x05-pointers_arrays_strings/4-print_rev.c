#include "main.h"
#include <string.h>

/**
 * print_rev - prints the characters of the string array s in reverse
 * @s: the string array pointer to be passed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len;

	len = strlen(s);
	while (len != -1)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
