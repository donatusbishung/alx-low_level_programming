
#include <stdio.h>

/**
 * main - entry
 *
 * Description: multiplies between 0 and 1024
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b;

	for (a = 0; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
			b += a;
	}
	printf("%d", b);

	return (0);
}
