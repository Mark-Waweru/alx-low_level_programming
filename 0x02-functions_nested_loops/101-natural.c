#include <stdio.h>

/**
 * main - prints all the sum of the multipes of 3 and 5 below 1024
 *
 * Return: void
 */
int main(void)
{
	int a, i = 0;

	while (a < 1024)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			i += a;
		}
		a++;
	}
	printf("%d\n", i);

	return (0);
}
