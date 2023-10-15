#include <stdio.h>
#include <stddef.h>
#include "dog.h"

/**
 * print_dog - prints dog information
 * @d: pointer of type struct dog
 *
 * Return: void.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("(nil)\n");
		if (d->age != NULL)
			printf("Age: %.lf\n", d->age);
		else
			printf("(nil)\n");
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("(nil)\n");
	}
}
