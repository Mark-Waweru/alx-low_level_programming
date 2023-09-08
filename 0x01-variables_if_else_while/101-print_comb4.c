#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			k = j + 1;
			while (k < 10)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (i != 88 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
		j++;
		}
	i++;
	}
	putchar('\n');

	return (0);
}
