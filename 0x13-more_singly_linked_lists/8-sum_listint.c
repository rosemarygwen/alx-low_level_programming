#include "lists.h"

/**
 * sum_listint - a function
 * @head: parameter
 * Return: 0
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *new = head;

	sum = 0;
	while (new != NULL)
	{
		sum += new->n;
		new = new->next;
	}
	return (sum);
}
