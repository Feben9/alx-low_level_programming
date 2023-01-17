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
dog_t *new_dog(char *name, float age, char *owner);
{
	dog_t *ptr;

	ptr = malloc(sizeof(*ptr));

	if (ptr)
	{
		ptr->name = name;
		ptr->owner = owner;
		ptr->age = age;
	}
	
	return(ptr);
}
