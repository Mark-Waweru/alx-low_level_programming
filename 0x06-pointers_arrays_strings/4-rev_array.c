#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @a: The array to be printed
 * @n: The number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int f;

	for (i = 0; i < n--; i++)
	{
		f = a[i];
		a[i] = a[n];
		a[n] = f;
	}
}
