#include <stdio.h>

/**
 * main - prints the alphabets in lower case minus q and e
 *
 * Return: 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	if (c == 'q' || c == 'e')
	{
	continue;
	}
	putchar(c);
	}
	putchar('\n');
	return (0);
}
