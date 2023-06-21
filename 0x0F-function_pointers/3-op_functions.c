#include "3-calc.h"

int op_add(int a, int b);

int op_sub(int a, int b);

int op_mul(int a, int b);

int op_div(int a, int b);

int op_mod(int a, int b);

/**
 * op_add - Returns the sum of 2 numbers
 *
 * @a: first number.
 * @b: second number.
 *
 * Return: The sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - Returns the difference between a and b.
 *
 * @a: First number;
 * @b: Second Number;
 *
 * Return: The difference of a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul -  Returns the product of a and b.
 *
 * @a: First number
 * @b: Second Number.
 *
 * Return: The product of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - Returns the division of a and b.
 *
 * @a: First Number.
 * @b: Second number.
 *
 * Return: Division of a and b.
 */

int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_mod - Returns the remainder of the divsion of a and b.
 *
 * @a: First Number.
 * @b: Second Number.
 *
 * Return: Remainder of the division between a and b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
