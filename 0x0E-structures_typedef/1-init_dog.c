#include <stdio.h>
#include "dog.h"
/**
 * init_dog - a function to initilize the struct dog
 * @d: pointer of type dog
 * @name: string pointer of type dog
 * @age: float of type dog
 * @owner: string pointer of type dog
 *
 * Return: Always void or NULL
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
