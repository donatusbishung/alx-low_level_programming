#include "main.h"

/**
 * print_chessboard - function prints the cheesboard
 * @a: pointer
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int b, d;

	for (b = 0; b < 8; b++)
	{
		for (d = 0; d < 8; d++)
			_putchar(*(*(b + a) + d));
		_putchar('\n');
	}
}
