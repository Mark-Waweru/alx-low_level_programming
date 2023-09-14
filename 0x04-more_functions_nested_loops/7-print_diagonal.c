#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: The number of lines to draw
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int row, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= n; row++)
		{
			for (space = 1; space <= row - 1; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
