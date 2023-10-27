#include "main.h"

/**
 * power - calculates(base ^ power)
 * @base:Base of exponent
 * @power: power of exponent
 *
 * Return: value of (base ^ power)
 */
unsigned long int power(unsigned int base, unsigned int power)
{
	unsigned long int n;
	unsigned int i;

	n = 1;
	for (i = 1; i <= power; i++)
	{
		n *= base;
	}
	return (n);
}

/**
 * print_binary - prints the binary representation of a number
 * @n: Te number to print in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, verify;
	char f;

	f = 0;
	divisor = power(2, sizeof(unsigned long int) * 8 - 1);

	while (divisor != 0)
	{
		verify = n & divisor;
		if (verify == divisor)
		{
			f = 1;
			_putchar('1');
		}
		if (f == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
