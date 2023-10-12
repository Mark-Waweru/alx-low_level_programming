#include "3-calc.h"

/**
 * op_add - Finds the addition of a and b
 * @a: The integer to be added
 * @b: The integer to add to a
 *
 * Return: The addition result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Finds the subtraction of a and b
 * @a: The integer to be subtracted
 * @b: The integer to subtract
 *
 * Return: The subtraction result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Finds the multiplication of a and b
 * @a: The integer multiplied
 * @b: The integer multiplier
 *
 * Return: The multiplication result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Finds the division of a by b
 * @a: The integer divided
 * @b: The integer divider
 *
 * Return: The dividion result
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Finds the division remainder of a by b
 * @a: The integer divided
 * @b: The integer divider
 *
 * Return: The remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
