#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - function prints the sum of two diagonals
 * of a square matrix
 * @a: pointer
 * @size: size of array
 *
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int i, matrix1 = 0, matrix2 = 0;

	for (i = 0; i < size; i++)
	{
		matrix1 += *(a + (size * i + i));
		matrix2 += *(a + (size * i + size - 1 - i));
	}
	printf("%d, ", matrix1);
	printf("%d\n", matrix2);
}
