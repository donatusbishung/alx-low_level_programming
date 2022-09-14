#include "main.h"

/**
 * jack_bauer - entry
 *
 * Return: Always (0).
 */

void jack_bauer(void)
{
	int hr, min;

	for (hr = 0; hr <= 59; hr++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((hr / 10) + 48);
			_putchar((hr / 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min / 10) + 48);
			_putchar('\n');
		}
	}
}
