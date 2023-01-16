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
struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H */
