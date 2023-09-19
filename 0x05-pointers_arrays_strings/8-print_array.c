#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of the array
 * @a: The array to be printed
 * @n: The number of elements
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d, ", a[i]);
		i++;
	}
	printf("\n");
}
