#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @argc: parameter that counts the number of argument
 * @argv: parameter that points to the array of arguments
 * Return: (0)
 */

int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
