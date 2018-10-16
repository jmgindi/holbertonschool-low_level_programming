#include "dog.h"
#include <stdlib.h>

/**
 * *_strcpy - copies a string to a new buffer
 * @dest: destination for copy
 * @src: source
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;

	while (*(src + l) != '\0')
	{
		dest[l] = src[l];
		l++;
	}

	return (dest);
}

/**
 * new_dog - creates a new dog using type dog_t
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ret = malloc(sizeof(struct dog));
	if (ret == NULL)
		return (NULL);

	ret->name = malloc(sizeof(ret->name));
	if (ret->name == NULL)
		return (NULL);

	ret->owner = malloc(sizeof(ret->owner));
	if (ret->owner == NULL)
		return (NULL);

	_strcpy(ret->name, name);
	ret->age = age;
	_strcpy(ret->owner, owner);

	return (ret);
}
