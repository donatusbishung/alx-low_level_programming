#include "dog.h"
#include <stdio.h>

/**
 * init_dog - a function that initializes a variable of type struct dog
 * @name: name of dog
 * @d: pointer to struct dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
