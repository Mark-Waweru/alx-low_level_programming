#include <stdio.h>
#pragma GCC diagnostic ignored "-Wunused-parameter"

/**
 * main - prints the number of arguments passed into it
 * @argc: The argument count
 * @argv: The string array
 *
 * Return: Always 0 (Success)
 */
int __attribute__ ((unused)) main(int argc, char *argv[])
{
	printf("%d\n", argc);

	return (0);
}
