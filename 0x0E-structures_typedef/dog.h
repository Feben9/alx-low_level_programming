#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defining my first struct
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description - this is a new struct for learning definition
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG_H */
