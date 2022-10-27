#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_s list
 * @head: pointer to head node
 * Return: data of head node
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int n;


	if (head == NULL)
		return (0);

	if (tmp == NULL)
		return (0);

	*head = (*head)->next;
	n = tmp->n;
	free(tmp);

	return (n);
}
