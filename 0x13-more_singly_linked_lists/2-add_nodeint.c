#include "lists.h"

/**
 * add_nodeint - a function that adds a new node
 * at the begining of listint_t list
 * @head: head pointer
 * @n: new position
 * Return: new element
 */

listtint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *values = (listint_t *)malloc(sizeof(listint_t));

	if (values == NULL)
		return (NULL);
	values->n = n;
	values->next = *head;
	*head = values;

	return (*head);
}
