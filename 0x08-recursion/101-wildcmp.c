#include"main.h"

/**
 * wildcmp - program compares two strings and return 1
 * @s1: string one
 * @s2: string two
 * Return: 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*' || (*s1 != '\0' && *s1 == *s2))
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	return (0);
}
