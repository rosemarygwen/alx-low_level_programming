#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - print strings.
 * @separator: the number of parameters
 * @n: the number of strings
 * Return: no return.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ro;
	char *string;

	va_start(ro, n);

	i = 0;
	while (i < n)
	{
		string = va_arg(ro, char*);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");

	va_end(ro);
}
