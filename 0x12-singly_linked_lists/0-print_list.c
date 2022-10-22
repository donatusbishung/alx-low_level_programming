#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: pointer
 * Return: numver of nodes
 */

size_t print_list(const list_t *h)
{
	int tmp = 0;

	while (h != NULL)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		tmp++;
	}
	return (tmp);
}
