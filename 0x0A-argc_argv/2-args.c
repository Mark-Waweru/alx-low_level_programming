#include <stdio.h>

/**
 * main - prints all arguments received
 * @argc: The argument count
 * @argv: The strring array argument
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}

	return (0);
}
