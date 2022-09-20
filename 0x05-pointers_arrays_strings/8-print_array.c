#include "main.h"

/**
 * print_array - prints elements of an array integers
 *
 * @a: first integer
 * @n: second integer
 *
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(",");
	}
	printf("\n");
}
