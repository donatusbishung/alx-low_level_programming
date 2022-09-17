#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: size of tthe triangle
 *
 * Return: Always 0
 */
void print_triangle(int size)
{
	int b, d, sp;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (b = 0; b < size; b++)
		{
			for (sp = 0; sp < size - b - 1; sp++)
			{
				_putchar(' ');
			}
			for (d = 0; d <= b; d++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
