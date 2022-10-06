#include "main.h"

/**
 * _strcat - Deals with 2 strings
 *
 * @dest: Destination
 *
 * @src: source.
 *
 * Return: pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
	int g = 0, h = 0;

	while (*(dest + g) != '\0')
	{
		g++;
	}

	while (h >= 0)
	{
		*(dest + g) = *(src + h);
		if (*(src + h) == '\0')
			break;
		g++;
		h++;
	}
	return (dest);
}
