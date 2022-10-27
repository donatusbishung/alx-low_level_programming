#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function prints all the elements of a listint_s list
 * @h: head pointer
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t tmp = 0;

	while (h!= NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		tmp++;
	}
	return (tmp);
}
