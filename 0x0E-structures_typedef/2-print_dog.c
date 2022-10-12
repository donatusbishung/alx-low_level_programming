#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the elements of struct dog
 * @d: pointer to struct dog
 * Return: 0
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d)
	{
		if ((*d).name == NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("Age: %.4f\n", d->age);
		if ((*d).owner == NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
