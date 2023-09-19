#include "main.h"

/**
 * puts2 - prints every character of a string starting with the first one
 * @str: The string array to be printed
 *
 * Return: void
 */
void puts2(char *str)
{
	int len = 0;
	int t = 0;
	char *y = str;
	int n;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	t = len - 1;

	for (n = 0; n < t; n++)
	{
		if (n % 2 == 0)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
