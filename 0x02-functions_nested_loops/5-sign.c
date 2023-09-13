#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: The number to be checked
 *
 * Return: 1 if n is greater than 0, -1 if less than 0 and 0 if 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		/*43 represents + sign in ASCII table*/
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		/* 45 represents - sign in ASCII table*/
		_putchar(45);
		return (-1);
	}
	else
	{
		/* 48 represents number 0 in the ASCII table*/
		_putchar(48);
		return (0);
	}
}
