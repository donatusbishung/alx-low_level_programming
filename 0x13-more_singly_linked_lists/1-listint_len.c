#include "lists.h"

/**
 * listint_len - returns the number of elements
 * @h: head pointer
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int tmp = 0;

	while (h != NULL)
	{
		h = h->next;
		tmp++;
	}
	return (tmp);
}
