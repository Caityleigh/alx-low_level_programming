#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: Given number in which its factorial is the output.
 * Return: Factorial of a given number.
 */

int factorial(int n)
{
	int res = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	res *= factorial(n - 1);

	return (res);
}


