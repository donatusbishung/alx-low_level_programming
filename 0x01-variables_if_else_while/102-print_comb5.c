#include <stdio.h>

/**
 * main- Entry point
 *
 * Description: program prints all possible combinations of
 * two two-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, e, j, h = 0;

	for (i = '0'; i <= '9'; i++)
	{
	for (e = '0'; e <= '9'; e++)
	{
	for (j = '0'; j <= '9'; j++)
	{
	for (h = e + 1; h <= '9'; h++)
	{
		putchar(i);
		putchar(e);
		putchar(' ');
		putchar(j);
		putchar(h);
		putchar(',');
		putchar(' ');
	}
	}
	}
	}
	putchar('\n');

	return (0);
}
