#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Poppy information
 * @name: poppy name
 * @age: poppy age
 * @owner: poppy owner
 *
 * Description: this structure defines name, age and owner of a poppy
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif