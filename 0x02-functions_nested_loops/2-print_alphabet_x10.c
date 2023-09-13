#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets a-z in lowercase 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int count = 0;

	while (count < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		count++;
	}
}
