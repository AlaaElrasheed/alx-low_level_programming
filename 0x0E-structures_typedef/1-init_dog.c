#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 *
 * @d: pointer to struct dog
 *
 * @name: dog's name
 *
 * @age: dog's age
 *
 * @owner: owner's
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
