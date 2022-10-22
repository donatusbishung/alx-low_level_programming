#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the start of the list
 *
 * Return: Always 0
 */

void free_list(list_t *head)
{
	list_t *heap, *next;

	heap = head;
	while (heap != NULL)
	{
		next = heap->next;
		free(heap->str);
		free(heap);
		heap = next;
	}
}
