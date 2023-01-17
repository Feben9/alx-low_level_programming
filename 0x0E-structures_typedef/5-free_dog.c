#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - a function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: dog_t or NULL
 */
void free_dog(dog_t *d)
{
	if (d)
		free(d);
}
