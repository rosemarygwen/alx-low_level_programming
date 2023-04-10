#include "main.h"

/**
 * is_prime_number - the function
 * @n: parameter
 * Return: 0
 */

int is_prime_number(int n)
{
	return (is_prime(2, n));
}

/**
 * is_prime - the function
 * @num: parameter
 * @root: parameter
 * Return: 0
 */

int is_prime(int num, int root)
{
	if (root % num == 0 || root < 2)
	{
		return (0);
	}
	else if (num == (root - 1))
	{
		return (1);
	}
	else if (root > num)
	{
		return (is_prime(num + 1, root));
	}
	else
	{
		return (1);
	}
}
