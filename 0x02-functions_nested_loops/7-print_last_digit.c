#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *@i: The number checked
 *
 * Return: returns l the last digit
 */
int print_last_digit(int i)
{
	int l = i % 10;

	if (l < 0)
	{
		l = l * -1;
		return (l);
	}
	_putchar(l + '0');
	return (l);
}
