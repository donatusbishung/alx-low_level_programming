#include "main.h"

/**
 * main- Prints _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char str[] = "_putchar";

	int item;

	for (item = 0; item < 8; item++)
		_putchar(str[item]);
	_putchar('\n');

	return (0);
}
