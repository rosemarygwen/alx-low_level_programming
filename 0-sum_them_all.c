#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * int sum_them_all - return sum of its parameters
 * @n: number of parameters passed to the function
 * @Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ro;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(ro, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ro, int);
	}

	va_end(ro);

	return (sum);
}
