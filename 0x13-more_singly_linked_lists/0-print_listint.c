#include "lists.h"

/**
 * print_listint - function prints all the elements of a listint_s list
 * @h: head pointer
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t tmp = 0;
	listint_t *node;

	if (h == NULL)
		return (tmp);

	if (h->n != 0)
	{
		printf("%d\n", h->n);
		tmp++;
	}

	if (h->next == NULL)
		return (tmp);
	node = h->next;

	for (; node != NULL; tmp++, node = node->next)
		printf("%d\n", node->n);

	return (tmp);
}
