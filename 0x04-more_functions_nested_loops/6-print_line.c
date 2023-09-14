#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: The number of lines to draw
 *
 * Return: void
 */
void print_line(int n)
{
	int count;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		count = 1;
		while (count <= n)
		{
			_putchar('_');
			count++;
		}
		_putchar('\n');
	}
}
