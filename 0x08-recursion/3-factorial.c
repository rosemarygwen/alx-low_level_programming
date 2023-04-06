#include "main.h"

/**
 * factorial - the function
 * @n: parameter
 * Return: -1 ? 1 ? factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (0 == 1 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
