#include "lists.h"
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

	while (*(s + length) != '\0')
		length++;

	return (length);
}

/**
 * add_node_end - adds an element to a list_t
 * @head: pointer to element to add after
 * @str: string for str field
 *
 * Return: pointer to new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newt;
	list_t *last;

	newt = malloc(sizeof(list_t));

	if (newt == NULL)
		return (NULL);

	newt->next = NULL;

	if (*head == NULL)
		*head = newt;

	while (last->next)
		last = last->next;

	last->next = newt;
	newt->str = strdup(str);
	newt->len = _strlen(str);

	return (newt);
}
