#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: pointer
 * Return: numver of nodes
 */

size_t print_list(const list_t *h)
{
	size_t size;
	list_t *node;

	if (h == NULL)
		return (0);

	for (size = 0; size < 1; size++)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
	}

	if (h->next == NULL)
		return (size);

	for (node = h->next; node != NULL; size++, node = node->next)
	{
		if (node->str != NULL)
			printf("[%d] %s\n", node->len, node->str);
		else
			printf("[0] (nil)\n");
	}
	return (size);
}
