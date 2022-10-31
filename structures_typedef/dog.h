#ifndef _DOG_H_
#define _DOG_H_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - structure dog
 * @name: first member
 * @age: second member
 * @owner: third member
 * Return: Always dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
