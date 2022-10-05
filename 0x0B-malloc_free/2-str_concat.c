#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - program with a functin that concatenates two strings

 * Return: NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, h, limit;
	char *s;

	if (*s1 == 0)
		s1 = " ";
	if (*s2 == 0)
		s2 = " ";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (h = 0; h < i; h++)
	s[h] = s1[h];
	limit = j;
	for (j = 0; j < limit; j++)
	s[j] = s2[j];

	return (0);
}
