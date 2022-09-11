#include <stdio.h>

/**
 * main- print in reverse
 *
 * Description: prints alphabet in reverse i.e. from z
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
