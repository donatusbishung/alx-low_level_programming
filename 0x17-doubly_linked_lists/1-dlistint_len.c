#include "lists.h"

/**
 * dlistint_len - Returns the numver of elements in a dlistint_t list.
 * @h: The head of the dlistint_t list.
 * Returns: The number of elements in the list.
 * Description: This function returns only the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *tmp = h;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
