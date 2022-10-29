#include "main.h"

/**
 * get_endianness - function checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int h = 1;
	char *p = (char *) &h;

	return ((int)*p);
}
