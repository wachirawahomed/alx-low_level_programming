#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * stlen - find length of string
 * @str: string
 * Return: length
 */
int stlen(char *str)
{
	int i;

	for (i = 0; *(str + i); i++)
		;
	return (i);
}

/**
 * new_dog - creates a new dog.
 * @name: pointer to dog's name
 * @age: dog's age
 * @owner: pointer to dog's owner
 * Return: pointer to new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dg;
	int i;
	int lname = stlen(name);
	int l_own = stlen(owner);

	dg = (dog_t *)malloc(sizeof(dog_t));
	if (dg == NULL)
		return (NULL);

	dg->name = malloc((lname * sizeof(char)) + 1);
	if (dg->name == NULL)
	{
		free(dg);
		return (NULL);
	}
	for (i = 0; i <= lname; i++)
		dg->name[i] = name[i];
	dg->age = age;
	dg->owner = malloc((l_own * sizeof(char)) + 1);
	if (dg->owner == NULL)
	{
		free(dg->name);
		free(dg);
		return (NULL);
	}
	for (i = 0; i <= l_own; i++)
		dg->owner[i] = owner[i];
	return (dg);
}
