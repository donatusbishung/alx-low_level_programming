#include "main.h"

/**
 * _strlen - returns the lenght of a string
 *
 * @s: integer
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int number;

	number = 0;
	while (*(s + number) != '\0')
		number++;

	return (number);
}
