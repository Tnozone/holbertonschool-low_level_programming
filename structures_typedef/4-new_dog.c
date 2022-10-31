#include <stdio.h>
#include <stdlib>
#include "dog.h"

/**
 * _strcpy - copy a string
 * @s: string to copy
 * Return: pointer to string copy
 */

char *_strcpy(char *s)
{
	int i;
	char *p;

	for (i = 0; s[i]; i++)
		;
	p = malloc(i + 1);
	if (p)
	{
		for (; i >= 0; i--)
			p[i] = s[i];
	}
	return (p);
}

/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: Always 0.
 */

dog_t *new_dog(char *name, float age, char *owner);
{
	dog_t *p;

	p = malloc(sizeof(*p));
	if (p == NULL)
		return (NULL);
	p->name = _strcpy(name);
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}
	p->age = age;
	p->owner = _strcpy(owner);
	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	return (p);
}
