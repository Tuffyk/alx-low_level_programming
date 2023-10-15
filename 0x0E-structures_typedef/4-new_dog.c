#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i, ncount, ocount;

	if (name == NULL || owner == NULL)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	for (ncount = 0; name[ncount] != '\0'; ncount++)
		;
	d->name = malloc((ncount + 1) * sizeof(char));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; i <= ncount; i++)
		d->name[i] = name[i];
	d->age = age;
	for (ocount = 0; owner[ocount] != '\0'; ocount++)
		;
	d->owner = malloc((ocount + 1) * sizeof(char));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (i = 0; i <= ocount; i++)
		d->owner[i] == owner[i];
	return (d);
}

