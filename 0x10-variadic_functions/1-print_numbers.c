#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: the string to be printed
 * @n: the number of parameters
 * Return: no return.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ro;
	unsigned int i;

	i = 0;

	va_start(ro, n);
	while (i < n)
	{
		printf("%d", va_arg(ro, unsigned int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}
	va_end(ro);
	printf("\n");
}
