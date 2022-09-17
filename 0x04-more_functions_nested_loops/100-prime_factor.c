#include <stdio.h>

/**
 * main - prints largest prime number
 * Return: Always 0
 */

int main(void)
{
	long int a, b;

	b = 612852475143;
	for (a = 2; a <= b; a++)
	{
		if (b % a == 0)
		{
			b /= a;
			a--;
		}
	}
	printf("%ld\n", a);

	return (0);
}
