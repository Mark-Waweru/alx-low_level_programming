#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers fro n to 98
 *@n: The number which is the starting point
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n <= 0)
	{
		while (n <= 98)
		{
			if (n == 98)
			{
				printf("%d", n);
				break;
			}
			else
			{
				printf("%d, ", n);
				n++;
			}
		}
		printf("\n");
	}
	else if (n >= 98)
	{
		while (n >= 98)
		{
			if (n == 98)
			{	
				printf("%d", n);
				break;
			}
			else
			{
				printf("%d, ", n);
				n--;
			}
		}
		printf("\n");
	}
	else
	{
		while (n <= 98)
		{
			if (n == 98)
			{
				printf("%d", n);
				break;
			}
			else
			{
				printf("%d, ", n);
				n++;
			}
		}
		printf("\n");
	}
}
