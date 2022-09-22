#include "main.h"

/**
 * reverse_array - this reverses the content of an array
 * @a: an array of integers
 * @n: number
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i, k, tmp;

	for (i = 0; i < n - 1; i++)
	{
		for (k = i + 1; k > 0; k--)
		{
			tmp = *(a + k);
			*(a + k) = *(a + (k - 1));
			*(a + (k - 1)) = tmp;
		}
	}
}
