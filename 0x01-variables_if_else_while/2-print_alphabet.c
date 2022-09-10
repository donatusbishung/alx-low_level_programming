#include <stdio.h>

/**
 * Main- prints the letters of the alphabet
 *
 * Description: print the letters of the alphabet
 *
 * Return 0 (Success)
 */

int main(void)
{
	int i = 97;

	while (i < 127)
	{
		putchar(i);
		i++;
	}
	putchar(10);

	return (0);
}
