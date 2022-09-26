#include "main.h"

/**
 * _memset - function that fills memory with a
 * constant value.
 *
 * @s: pointer to the block of memory
 * @b: byte (constant)
 * @n: number of bytes
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
