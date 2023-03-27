#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t list.
 * @index: Index of the node, starting from 0.
 * @head: Head of the list
 * Return: NULL if the code does not exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;

	while (current != NULL && index > 0)
	{
		current = current->next;
		index--;
	}
	if (current == NULL)
	{
		return (NULL);
	}

	return (current);
}
