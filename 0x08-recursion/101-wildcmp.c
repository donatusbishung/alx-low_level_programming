#include<stdio.h>

/**
 * wildcmp: program compares two strings and return 1
 * @s1: string one
 * @s2: string two
 * Return: 0
 */

int wildcmp(char *s1, char *s2) {
	//if both strings are empty or the strings are equal, return 1
	
	if (*s1 == '\0' && *s2 == '\0')
		return 1;

	// If the current char math or s2 has a wildcard '*', continue
	if (*s2 == '*' || (*s1 != '\0' && *s1 == *s2))
		return wildcmp(s1 + 1, s2 + 1);

	// If there's a mismatch and the wildcard '*' in s2 can be replaced char
	if (*s2 == '*')
		return wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2);

	// If there's a mismatch and no wildcard, return 0
	
	return 0;
}

int main() {
	char str1[] = "hello";
	char str2[] = "he*lo";

	if (wildcmp(str1, str2))
		printf("strings are identical.\n");
	else
		printf("strings are not identical.\n");
	
	return 0;
}
