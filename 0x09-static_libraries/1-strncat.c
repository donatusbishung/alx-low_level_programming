#include "main.h"

/**
 * _strncat - function that concatebates 2 strings
 * @dest: destination
 * @src: source
 * @n: integer
 * Return: resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int g = 0, s;

	while (*(dest + g) != '\0')
		g++;

	for (s = 0; s < n && *(src + s) != '\0'; s++)
	{
		*(dest + g) = *(src + s);
		g++;
	}
	return (dest);
}
