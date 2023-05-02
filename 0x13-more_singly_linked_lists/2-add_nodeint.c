#include "lists.h"

/**
 * add_nodeint - a function
 * @n: param
 * @head: a pointer
 * Return: 0
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *u;

	u = malloc(sizeof(listint_t));
	if (u == NULL)
	{
		return (NULL);
	}
	u->n = n;
	u->next = *head;
	*head = u;
	return (u);
}
