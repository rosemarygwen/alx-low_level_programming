#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node_end - Adds a new node at the end of a list
  * @head: The original linked list
  * @str: string to add to the node
  *
  * Return: address of the new list or NULL if it failed
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	temp = *head;
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	return (new);
}

/**
 * _strlen - Calculate lenght of a string.
 * @s: string.
 *
 * Return: lenght of the string.
 */

int _strlen(const char *s)
{
	int idx = 0;

	for (; s[idx]; idx++)
	;
	return (idx);
}
