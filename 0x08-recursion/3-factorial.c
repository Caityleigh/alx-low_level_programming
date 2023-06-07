#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: Given number in which its factorial is the output.
 * Return: Factorial of a given number.
 */

int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (!n == 0)
		return (1);

	result *= factorial(n - 1);

	return (result);
}


