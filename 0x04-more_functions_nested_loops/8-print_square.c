#include "main.h"

/**
 * print_square - prints a square using # character
 * @size: The size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int row, print;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		row = 1;
		while (row <= size)
		{
			print = 1;
			while (print <= size)
			{
				_putchar('#');
				print++;
			}
			_putchar('\n');
			row++;
		}
	}
}
