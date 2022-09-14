#include "main.h"

/**
 * main- print alphabet letters
 *
 * Description: program print_alphabets
 *
 * Return: void
 */

void print_alphabet(void) //print_alphabet
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
