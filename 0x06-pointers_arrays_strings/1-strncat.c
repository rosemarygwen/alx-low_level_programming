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
	int destlen = 0;
	int srclen = 0;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
		destlen++;
	for (j = 0; src[j] != '\0'; j++)
		srclen++;
	for (j = 0; j < n; j++)
		dest[destlen + 1] = src[i];
	return (dest);
}
