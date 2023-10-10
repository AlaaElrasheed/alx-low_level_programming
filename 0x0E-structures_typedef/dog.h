#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog struct
 *
 * @name: dog's name
 *
 * @owner: owner's name
 *
 * @age: dog's age
 *
 * Description: A lonley dog in kitty's universe
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
