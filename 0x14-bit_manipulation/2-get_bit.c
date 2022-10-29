#include "main.h"

/**
 * get_bit - function returns value of a bit at a given index
 * @n: decimal
 * @index: index
 * Return: value of bit index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int h;


	if (n == 0 && index < 64)
		return (0);
	for (h = 0; h <= 63; n >>= 1, h++)
	{
		if (index == h)
			return (n & 1);
	}
	return (-1);
}
