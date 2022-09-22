#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the char c to stdout
 *
 * @c: character to print
 *
 * Return: On success 1. and on erro -1.
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
