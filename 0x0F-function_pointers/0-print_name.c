#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - the function prints a name.
 * @name: string to add
 * @f: pointer to function that receives the string.
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

