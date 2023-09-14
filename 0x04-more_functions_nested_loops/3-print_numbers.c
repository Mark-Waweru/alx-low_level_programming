#include "main.h"

/**
 * print_numbers - prints number 0-9
 *
 * Return: void
 */
void print_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
