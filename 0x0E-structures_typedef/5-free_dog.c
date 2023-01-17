#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - a function that creates frees dogs
 * @d: pointer of struct dog_t
 *
 * Return: void or NULL
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
