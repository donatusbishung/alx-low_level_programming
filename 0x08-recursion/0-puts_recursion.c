#include "main.h"

/**
 * _puts_recursion - program prints a string followed by a \n.
 * @s: string
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}

int main(void)
{
	_puts_recursion("Puts with recursion");

	return (0);
}
