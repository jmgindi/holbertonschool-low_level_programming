#include "lists.h"

/**
 * list_len - prints the length of a list_t
 * @h: list_t input
 *
 * Return: node count
 */

size_t list_len(const list_t *h)
{
	size_t nodecount;

	while (h != NULL)
	{
		nodecount++;
		h = h->next;
	}

	return (nodecount);
}
