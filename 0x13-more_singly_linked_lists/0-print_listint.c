#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function prints all the elements of a listint_s list
 * @h: head pointer
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int i;
	const listint_t *tmp = h;

	for (i = 0; tmp != NULL; i++)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	return (i);
}
