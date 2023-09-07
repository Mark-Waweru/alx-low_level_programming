#include <stdio.h>

/**
 * main - prints some strings on the screen
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	for (int i = 0; msg[i] != '\0'; i++)
		putchar(msg[i]);

	return (0);
}
