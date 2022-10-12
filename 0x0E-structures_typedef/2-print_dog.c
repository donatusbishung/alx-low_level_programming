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
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->owner);
		if ((*d).age != 0)
			printf("Age: %.4f\n", d->age);
		else
			printf("Age: (nil)\n");
		if ((*d).owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
