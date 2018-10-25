#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: string to find length of
 *
 * Return: length of string
 */

int _strlen(const char *s)
{
	int length = 0;
	const char *copy = s;

	while (*(copy + length) != '\0')
		length++;

	return (length);
}

/**
 * add_node - adds a new node to the beginning of a list_t
 * @head: pointer to first element
 * @str: input for str field in list_t
 *
 * Return: address of new element, or NULL on failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	char *dupstring = strdup(str);

	/* head = malloc(sizeof(list_t)); */
	temp = (list_t *)malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	temp->str = dupstring;
	temp->len = _strlen(str);
	temp->next = *head;
	*head = temp;

	return (*head);
}
