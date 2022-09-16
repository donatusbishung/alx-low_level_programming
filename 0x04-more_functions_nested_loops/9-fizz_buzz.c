#include <stdio.h>
#include "main.h"

/**
 * main - entry
 *
 * Description: prints the numbers 1 - 100 w/
 * Fizz for multplication od 3, Buzz for the multiplication of 5,
 * and FizzBuzz for the multiplication of both
 *
 * Return: Always o
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
