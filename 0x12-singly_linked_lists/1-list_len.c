#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - calculte the number of elements in a linked list.
 * @h: the list.
 *
 * Return: number of elements in the linked list.
 */

size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		s++;
		h = h->next;
	}
	return (s);
}
