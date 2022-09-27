#include "main.h"

/**
 * _strstr- finds the occurrence of the substring
 * @haystack: string to search for string
 * @needle: substring to search for
 *
 * Return: to the begiining of located string
 */

char *_strstr(char *haystack, char *needle)
{
	char *i, *j;

	while (*haystack != '\0')
	{
		i = haystack;
		j = needle;
		while (*haystack != '\0' && *j != '\0' && *haystack == *j)
		{
			haystack++;
			j++;
		}
		if (!*j)
			return (i);
		haystack = i + 1;
	}
	return (0);
}
