#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - adds positive numbers
 * @argc: The argument count
 * @argv: The argument array string
 *
 * Return: 0, Error or (Success)
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int count;
	char *s;
	unsigned int checks;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			s = argv[count];
			for (checks = 0; checks < strlen(s); checks++)
			{
				if (s[checks] < 48 || s[checks] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[checks]);
			checks++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
