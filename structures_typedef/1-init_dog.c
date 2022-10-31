#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @name: char
 * @age: float
 * @owner: char
 * Return: Always 0.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *d;

	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
	return d;
}

