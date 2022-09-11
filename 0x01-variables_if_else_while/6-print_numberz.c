#include <stdio.h>

/**
 * main- prints number in base 10
 *
 * Description: number in base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}
	putchar('\n');

	return (0);
}
