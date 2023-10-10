#include "dog.h"

/**
 * _int_dog -  function that initialize a variable of type struct dog
 * @owner: owner's name
 * @name: dog's name
 * @age: dog;s age
 * @d: input value
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
