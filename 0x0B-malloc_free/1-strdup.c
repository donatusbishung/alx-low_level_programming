#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - program with a function that returns a pointer to a
 * newly allocated space in memory which contains a string given as
 * a parameter.
 * @str: string
 * Return: returns NULL if insufficient space is available
 */

char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *c;

	if (str == 0)
		return (NULL);
	while (str[i] != '\0')
		i++;
	c = malloc(sizeof(char) * (i + 1));
	if (c == 0)
		return (NULL);
	for (; j <= i; j++)
		c[j] = str[j];
	return (c);
}
