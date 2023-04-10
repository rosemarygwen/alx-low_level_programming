#include "main.h"

/**
* _strstr - locates a substring
*
* @haystack: the longer string to search
* @needle: the substring to search for
*
* Return: a pointer to the beginning of the located substring, or NULL if
* the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	int j;
	int i = 0;

	while (needle[s] != '\0')
		i++;

	while (*haystack)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[j] != needle[j])
				break;
		}
		if (j != i)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
