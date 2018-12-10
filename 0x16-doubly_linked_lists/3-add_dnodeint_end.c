#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a dlistint
 * @head: pointer to head of list
 * @n: data for ->n of new node
 *
 * Return: address of new node, NULL on failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *last;

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;

		while (last->next != NULL)
			last = last->next;

		last->next = new;
		new->prev = last;
	}

	return (new);
}
