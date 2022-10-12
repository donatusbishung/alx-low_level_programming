#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the elements of struct dog
 * @d: pointer to struct dog
 * Return: 0
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name != NULL)
			printf("%s\n", d->name);
		else
			printf("Name: (nil)\n");
		if ((*d).age != NULL)
			printf("%.4f\n", d->age);
		else
			printf("Age: (nil)\n");
		if ((*d).owner != NULL)
			printf("%s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
