#include "lists.h"

/**
 * listint_len - a function
 * @h: param
 * Return: 0
 */

size_t listint_len(const listint_t *h)
{
	int cul;

	cul = 0;
	while (h != NULL)
	{

		cul++;
		h = h->next;
	}
	return (cul);
}
