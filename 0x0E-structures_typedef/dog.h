#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Defines a new type struct dog
 * @name: the dog's name.
 * @age: the dog's age.
 * @owner: the dog's owner
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
