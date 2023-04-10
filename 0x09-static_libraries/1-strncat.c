#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of characters to append
 * Return: pointer to destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int length;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (length = 0; src[length] != '\0' && n > 0; length++, n--, i++)
		dest[i] = src[length];
	return (dest);
}
