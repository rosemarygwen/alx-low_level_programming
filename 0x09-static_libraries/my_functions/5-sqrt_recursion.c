#include "main.h"

/**
 * _sqrt_recursion - the function
 * @n: parameter
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	return (is_sqrt(1, n));
}

/**
 * is_sqrt - the function
 * @num: parameter
 * @root: parameter
 * Return: value
 */

int is_sqrt(int num, int root)
{
	if ((num * num) == root)
	{
		return (num);
	}
	else if ((num * num) > root)
	{
		return (-1);
	}
	else
	{
		return (is_sqrt(num + 1, root));
	}
}
