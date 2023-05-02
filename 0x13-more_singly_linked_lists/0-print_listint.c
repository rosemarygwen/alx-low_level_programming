#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a function
 * @h: parameter
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int num_nod;

	num_nod = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		num_nod++;
		h = h->next;
	}
	return (num_nod);
}
