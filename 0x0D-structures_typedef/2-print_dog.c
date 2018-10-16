#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints members of dog
 * @d: structure name
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if ((*d).name == NULL)
		(*d).name = "(nil)";

	if ((*d).owner == NULL)
		(*d).owner = "(nil)";

	else
		printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
}
