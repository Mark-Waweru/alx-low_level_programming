#include <stdio.h>

/**
 * main - Prints its name, followed by a new line
 * @argc: The argument count
 * @argv: The string array
 *
 * Return: ALways 0 (Success)
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
