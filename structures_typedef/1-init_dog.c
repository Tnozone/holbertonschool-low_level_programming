#include <stdlib.h>
#include "dog.h"
#include "main.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to dog
 * @name: char
 * @age: float
 * @owner: char
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

