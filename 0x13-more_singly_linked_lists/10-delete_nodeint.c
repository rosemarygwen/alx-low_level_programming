#include "lists.h"

/**
 * delete_nodeint_at_index - a function
 * @head: parameter
 * @index: parameter
 * Return: 1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new, *tmp;
	unsigned int i;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	new = *head;
	for (i = 0; new != NULL && i < index - 1; i++)
	{
		new = new->next;
	}
	if (new == NULL || new->next == NULL)
		return (-1);
	tmp = new->next;
	new->next = tmp->next;
	free(tmp);
	return (1);
}
