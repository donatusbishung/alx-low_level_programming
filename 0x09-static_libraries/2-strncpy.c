#include "main.h"

/**
 * _strncpy - this copies a string
 * @dest: sestination
 * @src: source
 * @n: integer
 *
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0; k < n && *(src + k) != '\0'; k++)
		*(dest + k) = *(src + k);
	for (; k < n; k++)
		*(dest + k) = '\0';
	return (dest);
}
