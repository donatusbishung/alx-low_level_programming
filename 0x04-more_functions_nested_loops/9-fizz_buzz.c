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
	int nums;

	for (nums = 1; nums < 100; nums++)
	{
		if ((nums % 3 == 0) && (nums % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (nums % 3 == 0)
		{
			printf("Fizz");
		}
		else if (nums % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d", nums);
		}
	}
	printf("Buzz\n");

	return (0);
}
