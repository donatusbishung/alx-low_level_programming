#include "main.h"
#include <stdio.h>

/**
 * square - finding square
 * @i: number
 * @j: sqrt
 * Return: int
 */

int square(int i, int j)
{
	if (j * j == i)
		return (j);
	else if (j * j > i)
		return (-1);
	else
		return (square(i, j + 1));
}
/**
 * _sqrt_recursion - program returns the natural square root of a number
 * @n: number
 * Return: natural sqrt
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
