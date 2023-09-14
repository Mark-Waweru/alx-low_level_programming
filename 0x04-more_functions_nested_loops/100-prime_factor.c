#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long x, f;
	long n = 612852475143;
	double square = sqrt(n);

	for (x = 1; x <= square; x++)
	{
		if (n % x == 0)
		{
			f = n / x;
		}
	}
	printf("%ld\n", f);

	return (0);
}
