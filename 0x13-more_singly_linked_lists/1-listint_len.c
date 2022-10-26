#include "lists.h"

/**
 * listint_len - returns the number of elements
 * @h: head pointer
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int value = 0;

	while (h != NULL)
	{
		h = h->next;
		value++;
	}
	return (value);
}
