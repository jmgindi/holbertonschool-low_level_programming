#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a listint_t
 * @head: pointer to beginning of listint_t
 * @n: integer for n parameter
 *
 * Return: address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newlint;
	listint_t *last;

	newlint = malloc(sizeof(listint_t));

	if (newlint == NULL)
		return (NULL);

	newlint->next = NULL;

	if (*head == NULL)
		*head = newlint;

	while (last->next)
		last = last->next;

	last->next = newlint;
	newlint->n = n;

	return (*newlint);
}
