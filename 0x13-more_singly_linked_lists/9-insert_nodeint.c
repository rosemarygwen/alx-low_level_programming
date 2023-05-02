#include "lists.h"

/**
 * insert_nodeint_at_index - a function
 * @head: parameter
 * @idx: parameter
 * @n: parameter
 * Return: 0
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current;
	unsigned int i;

	if (head == NULL)
	if (*head == NULL)
		return (NULL);
	if (idx == 0)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	current = *head;
	for (i = 0; current != NULL && i < idx - 1; i++)
	{
		current = current->next;
	}
	if (current == NULL || i < idx - 1)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = current->next;
	current->next = new;
	return (new);
}
