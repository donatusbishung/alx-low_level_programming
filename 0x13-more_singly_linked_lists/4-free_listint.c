#include "lists.h"

/**
 * free_listint - function frees a listint_s list
 * @head: pointer to head
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
