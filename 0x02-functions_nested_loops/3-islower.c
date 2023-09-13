#include "main.h"

/**
 * _islower - It checks if a letter is in lowercase
 * @c: The character to be checked
 *
 * Return: 1 if it is lowercase and 0 if it is not lowercase
 */
int _islower(int c)
{
	/*ASCII standard for lowercase letters range from 97 to 122*/
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
