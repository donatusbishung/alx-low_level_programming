#include "main.h"

/**
 * more_numbers - entry
 *
 * Return: void
 */

void more_numbers(void)
{
	int i = 0;

	int ch = 0;

	for (i = 0; i < 10; i++)
	{
		for (ch = 0; ch < 15; ch++)
		{

			if (ch >= 10)
				_putchar((ch / 10) + 48);
			_putchar((ch % 10) + 48);
		}
		_putchar('\n');
		i = 0;
	}
}
