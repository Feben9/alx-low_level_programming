#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - a function that prints a struct dog
 * @d: pointer of type dog
 *
 * Return: Always void or NULL
 */
void print_dog(struct dog *d)
{
	if (d.name == NULL)
		printf("Name: (nil)");
	if (d.age == NULL)
		printf("Age: (nil)");
	if (d.owner == NULL)
		printf("Owner: (nil)");
	if (d)
	{
		if (!(d->name))
			printf("Name: (nil)\n");
		else
			printf("Name: %s", d->name);
		printf("Age: %s", d->age);
		if (!(d->owner))
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s", d->owner);
	}
}
