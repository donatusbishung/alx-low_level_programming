#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}

int main(void)
{
	int a = 3;
	int b = 7;
	swap_int(a, b);

	printf("")
}
