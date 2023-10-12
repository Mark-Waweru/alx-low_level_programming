#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: The name parameter to be passed
 * @f: The function pointer
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
