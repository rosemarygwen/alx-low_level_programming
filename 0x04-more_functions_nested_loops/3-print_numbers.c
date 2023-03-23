#include "main.h"

/**
 * print_numbers - prints the numbers
 * @c: character to be checked
 *
 * declaration: print the numbers with _putchar
 *
 * Return: void
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n')
}
