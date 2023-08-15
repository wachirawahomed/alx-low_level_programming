#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Defines a new type struct dog.
 * @name: the dog's name.
 * @age: the dog's age.
 * @owner: the dog's owner.
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - a new name for the type struct dog..
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
