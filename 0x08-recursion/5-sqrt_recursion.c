#include "main.h"

int _sqrt(int n, int m);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: The number to get the square root
 *
 * Return: The square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - gets the sqrt of a number
 * @n: The number to get the sqrt
 * @m: The root
 *
 * Return: integer value
 */
int _sqrt(int n, int m)
{
	int sqrt = m * m;

	if (sqrt > m)
	{
		return (-1);
	}
	if (sqrt == n)
	{
		return (m);
	}

	return (_sqrt(n, m + 1));
}
