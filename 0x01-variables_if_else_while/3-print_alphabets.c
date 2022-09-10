#include <stdio.h>

/**
 * main- prints the alphabet
 *
 * Description: prints the alphabet in upper and lower case
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alp[i]);

	}

	putchar('\n');

	return (0);
}
