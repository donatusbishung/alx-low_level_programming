#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - generates time
 *
 * Return: 0
 */

int main(void)
{
	int a = 0, f = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (f < 2772)
	{
		a = rand() % 128;
		if ((f + a) > 2772)
			break;
		f = f + a;
		printf("%c", a);
	}
	printf("%c\n", (2772 - f));
	return (0);
}
