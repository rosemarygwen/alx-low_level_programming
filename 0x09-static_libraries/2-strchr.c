#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: the string to check
 * @c: the character we're looking for
 *
 * Return: a pointer to the first occurance of the character @c in the string
 * @s. Return NULL if the character isn't found
 */

char *_strchr(char *s, char c)
{
	int rose;

	for (rose = 0; s[rose] >= '\0'; rose++)
	{
		if (s[rose] == c)
		{
			return (s + rose);
		}
	}
	return ('\0');
}
