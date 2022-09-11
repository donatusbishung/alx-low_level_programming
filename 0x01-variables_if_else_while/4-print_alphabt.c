#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main- print alphabet without q and a
 *
 * Description: program that prints alphabet without q and a
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');

	return (0);
}
