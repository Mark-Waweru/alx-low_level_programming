#include <stdio.h>

/**
 * main - prints alphabets a-zA-Z in lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	char C;

	c = 'a';
	C = 'A';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');

	return (0);
}
