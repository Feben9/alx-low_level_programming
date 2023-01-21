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
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int i, lname, lowner;

	ptr = malloc(sizeof(*ptr));
	if (ptr == NULL || !(name) || !(owner))
	{
		free(ptr);
		return (NULL);
	}

	for (lname = 0; name[lname]; lname++)
	{
	}
	for (lowner = 0; owner[lowner]; lowner++)
	{
	}
	ptr->name = malloc(lname + 1);
	ptr->owner = malloc(lowner + 1);

	if (!(ptr->name) || !(ptr->owner))
	{
		free(ptr->owner);
		free(ptr->name);
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < lname; i++)
		ptr->name[i] = name[i];
	ptr->name[i] = '\0';
	ptr->age = age;
	for (i = 0; i < lowner; i++)
		ptr->owner[i] = owner[i];
	ptr->owner[i] = '\0';

	return (ptr);
}
