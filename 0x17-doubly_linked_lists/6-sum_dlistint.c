#include "lists.h"

/**
 * sum_dlistint - Calculates the sum of all data values in a linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: 0 if the list is empty,
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
