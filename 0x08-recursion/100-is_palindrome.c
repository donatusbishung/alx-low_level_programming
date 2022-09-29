#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}

/**
 * palindrome - palindrome checker
 * @s: string
 * @i: position
 * Return: int
 */

int palindrome(char *s, int i)
{
	if (i < 1)
		return (1);
	else if (*s == *(s + 1))
		return (palindrome(s + 1, i - 2));
	else
		return (0);
}

/**
 * is_palindrome - program returns 1 if a string is a palindrome
 * @s: string
 * Return: 1 if true, 0 if otherwise
 */

int is_palindrome(char *s)
{
	int l = _strlen_recursion(s);

	return (palindrome(s, l - 1));
}
