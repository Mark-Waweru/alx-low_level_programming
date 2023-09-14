#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: The size of the triangle according to height
 *
 * Return: void
 */
void print_triangle(int size)
{
	int row, space, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (space = 1; space <= size - row; space++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= row; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
