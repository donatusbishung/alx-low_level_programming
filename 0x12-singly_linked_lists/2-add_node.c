#include "lists.h"

/**
 * _strlen - length of a string is returned
 * @s: str
 * Return: string
 */

unsigned int _strlen(char *s)
{
	unsigned int l;

	for (l = 0; s[l]; l++)
		;
	return (l);
}

/**
 * add_node - adds a node(new) at the beginning of the list
 * @head: pointer to the head of list
 * @str: string
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp

	if (str == NULL)
		return (NULL);
	temp = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->len = _strlen(tem->str);
	temp->next = *head;
	*head = temp;

	return (temp);
}
