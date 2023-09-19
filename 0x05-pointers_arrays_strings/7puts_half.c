#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: The char array to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len;
	int n;
	int e;

	len = strlen(str);
	if (len % 2 == 0)
	{
		e = len / 2;
		while (str[e] != '\0')
		{
			_putchar(str[e]);
			e++;
		}
		_putchar('\n');
	}
	else
	{
		n = (len - 1) / 2;
		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
		_putchar('\n');
	}
}
