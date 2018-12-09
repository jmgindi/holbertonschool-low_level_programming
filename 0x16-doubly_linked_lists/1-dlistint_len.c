#include "lists.h"

/**
 * dlistint_len - returns the length of the dlistint
 * @h: head of dlistint
 *
 * Return: number of elements in dlistint
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i;
	dlistint_t *cur = (dlistint_t *) h;

	for (i = 0; cur != NULL; i++)
		cur = cur->next;

	return(i);
}
