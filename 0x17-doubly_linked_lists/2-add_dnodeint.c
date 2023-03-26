#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the begining of a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: the integer for the  new node to contain.
 *
 * Return: If the function fails - NULL.
 * Otherwise - the address ot the new node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n;
	new->next = *head;
	new->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;
	return (new);
}