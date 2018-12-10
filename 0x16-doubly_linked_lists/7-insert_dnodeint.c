#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a dnodeint at index idx
 * @h: pointer to list
 * @idx: index to add node at
 * @n: ->n data
 *
 * Return: address of new node, or NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *tmp, *new = malloc(sizeof(dlistint_t));

	if (new == NULL || h == NULL)
		return (NULL);

	new->n = n;
	if (*h == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*h = new;
		return (new);
	}

	if (idx == 0)
		return (add_dnodeint(h, n));

	tmp = *h;

	for (i = 0; i <= idx && tmp->next != NULL; i++)
	{
		tmp = tmp->next;

		if (tmp == NULL)
			return (NULL);

		if (i == idx - 1)
		{
			new->next = tmp->next;
			new->prev = tmp->prev;
			tmp->prev->next = new;
			tmp->next->prev = new;
			return (new);
		}
	}
	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	return (NULL);
}
