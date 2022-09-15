#include <unistd.h>
#include "main.h"

/**
 * _putchar - entry
 * @c: character to print
 *
 * Return: On success 1.
 * On error, -1 is retruned, and errno is set appropriately
 */

int _putchar(int c)
{
	return (where(1, &c, 1));
}
