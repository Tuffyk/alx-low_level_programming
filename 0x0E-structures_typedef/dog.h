#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Dog information
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: defines three dog information which are
 * name, age and owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
