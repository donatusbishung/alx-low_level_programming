#include "lists.h"

/**
 * print_listint - A function that prints all the elements of a listint_t list
 * @h: head pointer
 * Return: 0
 */

size_t print_listint(const listint_t *h)
{
	int value = 0;

	while (h != NULL)
	{
		printf("%d\n", h->value);
		h = h->next;
		value++;
	}
	return (n);
}
