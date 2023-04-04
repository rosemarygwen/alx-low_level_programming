#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: segment to return bytes from
 * @accept: the bytes to include
 *
 * Return: the number of bytes in the initial segment of @s which consist only
 * of bytes from @accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int rose, ray, count;

	count = 0;

	for (rose = 0; s[rose] != ' '; rose++)
	{
		for (ray = 0; accept[ray] != '\0'; ray++)
		{
			if (s[rose] == accept[ray])
			{
				count++;
			}
		}
	}
	return (count);
}
