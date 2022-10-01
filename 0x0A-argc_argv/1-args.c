#include <stdio.h>

/**
 * main - program prints the number of arguments
 * passed into it
 * @argc: argument
 * @argv: command line argument
 * Return: 0
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
