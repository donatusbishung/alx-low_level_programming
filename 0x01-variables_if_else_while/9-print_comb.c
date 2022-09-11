#include <stdio.h>

/**
 * main- entry point
 *
 * Descripton: program prints all possible 
 *
 * combinations of single-digits numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int item;

	for (item = '0'; item <= '9'; item++)
	{
		putchar(item);

		if (item != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
