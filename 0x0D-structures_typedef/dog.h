#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - struct of info about a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
//dog_t *new_dog(char *name, float age, char *owner);
#endif
