#include "main.h"

/**
 * _pow_recursion - the function
 * @x: parameter
 * @y: parameter
 * Return: -1 ? 1 ? value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
