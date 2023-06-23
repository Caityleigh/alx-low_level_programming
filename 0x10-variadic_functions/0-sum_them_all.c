#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all parameters.
 *
 * @n: Number of arguments that are passed to function.
 * @...: Variable number of arguments to calculate the sum.
 *
 * Return: If n is 0 - return 0, otherwise the sum of
 * all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int i, sum = 0;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(num, int);
	}
	va_end(num);

	return (sum);
}
