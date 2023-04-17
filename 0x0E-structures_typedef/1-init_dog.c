#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a variable of type "struct dog"
 * @d: pointer to the variable my_dog
 * @name: poppy name
 * @age: poppy age
 * @owner: poppy owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
