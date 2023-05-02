#include "lists.h"

/**
 * get_nodeint_at_index - a function
 * @head: parameter
 * @index: parameter
 * Return: 0
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *new = head;

	i = 0;
	while (new != NULL && i < index)
	{
		new = new->next;
		i++;
	}
	if (new == NULL || i < index)
	{
		return (NULL);
	}
	return (new);
}
