#include "main.h"

/**
 * _puts - prints the str array characters on the screen
 * @str: The string array to be passed as an argument
 *
 * Return: void
 */
void _puts(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
