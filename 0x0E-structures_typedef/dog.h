#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Defines the various members
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: Always 0
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef defines new name
 */

typedef struct dog dog_t;

int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H_ */
