#include "lists.h"

/**
 * free_listint2 - a function
 * @head: parameter
 */

void free_listint2(listint_t **head)
{
	listint_t *the;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		the = *head;
		*head = (*head)->next;
		free(the);
	}
	*head = NULL;
}
