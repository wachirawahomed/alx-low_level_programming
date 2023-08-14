#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to variable of type struct dog
 * @name: elements of structure dog.
 * @age: elements of structure dog.
 * @owner: elements of structure dog.
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
