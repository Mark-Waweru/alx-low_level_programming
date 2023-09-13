#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character to be checked
 *
 * Return: 1 if it is a character and returns 0 if it is not a character
 */
int _isalpha(int c)
{
	/*ASCII range for lowercase characters is from 97-122*/
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	/*ASCII range for uppercase characters is from 65-90*/
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
