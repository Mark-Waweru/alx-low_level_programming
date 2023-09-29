#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: The argument count
 * @argv: The string character
 *
 * Return: Always 0 (Succes)
 */
int main(int argc, char *argv[])
{
	int mul, a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		mul = a * b;
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
