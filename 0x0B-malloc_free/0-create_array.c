#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes a specific char.
 * @size: This is the length of the array
 * @c: char to assign
 *
 * Return: pointer to array, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = (char *) malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
