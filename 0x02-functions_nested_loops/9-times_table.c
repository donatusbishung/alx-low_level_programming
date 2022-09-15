#include "main.h"

/**
 * times_table - entry
 *
 * Return: void
 */

void times_table(void)
{
	int start = 0;
	int stop = 0;

	for (start = 0; start <= 9; start++)
	{
		for (stop = 0; stop <= 9; stop++)
		{
		int result = start * stop;

		if (start == 0)
			printf("%i", start);
		if (result > 10)
			printf(", %i", result);
		else
		printf(",%i", result);
	}
	}
	_putchar('\n');
}
