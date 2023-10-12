#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints string
 * @separator: The string to separate the string
 * @n: The number of arguments passed
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list(sp);
	va_start(sp, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(sp, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(sp);
	printf("\n");
}
