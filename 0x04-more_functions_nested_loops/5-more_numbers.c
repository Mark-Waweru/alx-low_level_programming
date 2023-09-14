#include "main.h"

/**
 * more_numbers - prints 10 times numbers from 0-14
 *
 * Return: void
 */
void more_numbers(void)
{
	int n, count = 0;

	while (count < 10)
	{
		n = 0;
		while (n <= 14)
		{
			if (n > 9)
			{
				_putchar('1');
			}
			_putchar(n % 10 + '0');
			n++;
		}
		_putchar('\n');
		count++;
	}
}
