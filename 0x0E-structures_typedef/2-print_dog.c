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
	d = malloc(sizeof(struct dog));

	if (user.name == NULL)
		printf("Name: (nil)");
	if (user.age == NULL)
		printf("Age: (nil)");
	if (user.owner == NULL)
		printf("Owner: (nil)");
	if (user == NULL)
		return (NULL);
	printf("Name: %s", d->name);
	printf("Age: %s", d->age);
	printf("Owner: %s", d->owner);
}
