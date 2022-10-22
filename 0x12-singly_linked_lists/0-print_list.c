#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: pointer
 * Return: numver of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int t = 0;
	const list_t *tmp;

	tmp = h;
	for (i = 0; tmp; i++)
	{
		printf("[%d] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
	}
	return (i);
}
