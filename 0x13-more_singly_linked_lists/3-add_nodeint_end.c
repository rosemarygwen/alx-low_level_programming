#include "lists.h"

/**
 * add_nodeint_end - a function
 * @n: param
 * @head: a pointer to a pointer
 * Return: 0
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *a;
	listint_t *b;

	a = malloc(sizeof(listint_t));
	if (a == NULL)
	{
		return (NULL);
	}
	a->n = n;
	a->next = NULL;
	if (*head == NULL)
	{
		*head = a;
		b = a;
	}
	else
	{
		b = *head;
		while (b->next != NULL)
		{
			b = b->next;
		}
		b->next = a;
	}
	return (a);
}
