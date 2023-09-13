#include "main.h"

/**
 * jack_bauer - prints every minute from 00:00 to 23:59
 *
 * Return: void
 */
void jack_bauer(void)
{
	int h = 0;
	int m;

	while (h < 24)
	{
		m = 0;
		while (m < 60)
		{
			_putchar('0' + (h / 10));
			_putchar('0' + (h % 10));
			_putchar(':');
			_putchar('0' + (m / 10));
			_putchar('0' + (m % 10));
			_putchar('\n');
			m++;
		}
		h++;
	}
}
