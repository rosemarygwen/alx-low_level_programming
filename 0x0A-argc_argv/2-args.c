#include <stdio.h>

/**
 * main - entry point
 * @argc: parameter that counts the number of argument
 * @argv: parameter that points to the array of arguments
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int leo = 0;

	for (leo = 0; leo < argc; leo++)
	{
		printf("%s\n", argv[leo]);
	}

	return (0);
}
