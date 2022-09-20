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

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d\n", a[i]);
		else
			printf("%i, ", a[i]);
	}
}
