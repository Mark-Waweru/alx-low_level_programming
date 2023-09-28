#include "main.h"

int check_prime(int n, int m);

/**
 * is_prime_number - returns 1 if input is a prime number, otherwise return 0
 * @n: The number to be checked
 *
 * Return: (1) or (0)
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - checks if a number is prime number
 * @n: The number to be checked
 * @m: iteration times
 *
 * Return: 1 prime 0 composite
 */
int check_prime(int n, int m)
{
	if (n <= 1)
		return (0);
	if (n % m == 0 && m > 1)
		return (0);
	if ((n / m) < m)
		return (1);

	return (check_prime(n, m + 1));
}
