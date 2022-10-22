#include "lists.h"

/**
 * len - length of a string is returned
 * @s: str
 * Return: string
 */

int len(const char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
		continue;
	return (length);
}

/**
 * add_node - adds a node(new) at the beginning of the list
 * @head: pointer to the head of list
 * @str: string
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = (list_t *)malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->len = len(str);
	temp->next = *head;
	*head = temp;

	return (*head);
}
