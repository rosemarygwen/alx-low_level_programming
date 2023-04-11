#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: parameter that counts the number of argument
 * @argv: parameter that points to the array of arguments
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	if ((argc - 1) == 2)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

