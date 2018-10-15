#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: structurename
 * @name: name of dog
 * @age: age of dog
 * @owner: dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
