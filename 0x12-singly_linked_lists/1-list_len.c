#include "lists.h"

/**
 * list_len - numbers of elements in a list are returned
 * @h: pointer
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int tmp = 0;

	while (h != NULL)
	{
		h = h->next;
		tmp++;
	}
	return (tmp);
}
