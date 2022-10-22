#include "lists.h"

/**
 * _strlen - finds the length of a str
 * @str: string
 * Return: length of the string
 */

unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}
/**
 * add_node_end - adds a new node to the end of a linked list
 * @head: pointer to a linked list (double)
 * @str: string
 *
 * Return: to new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *suu, tmp;

	if (str == NULL)
		return (NULL);
	suu = malloc(sizeof(list_t));
	if (suu == NULL)
		return (NULL);
	suu->str = strdup(str);
	if (suu->str == NULL)
	{
		free(suu);
		return (NULL);
	}
	suu->len = _strlen(suu->str);
	suu->next = NULL;
	if (*head == NULL)
	{
		*head = suu;
		return (suu);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = suu;
	return (suu);
}
